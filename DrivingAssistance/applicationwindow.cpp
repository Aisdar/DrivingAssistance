#include "applicationwindow.h"
#include "ui_applicationwindow.h"
#include "packet.h"
#include "myconfig.h"
#include "myhelper.h"
#include "logindialog.h"
#include "registerdialog.h"
#include "myevent.h"
#include <QTimer>

#include <QDesktopWidget>
#include <QDebug>


ApplicationWindow::ApplicationWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplicationWindow),
    m_pLoginDlg(nullptr),
    m_pRegDlg(nullptr),
    m_pTimeLabTimer(new QTimer())
{
    ui->setupUi(this);

    /* 界面位置初始化居中 */
    MyHelper::formInCenter(this, MyConfig::deskWidth, MyConfig::deskHeight);
    m_pTimeLabTimer->setInterval(1000);
    connect(m_pTimeLabTimer, &QTimer::timeout,[=]
    {
        ui->TimeLab->setText(CURRENT_TIME);
    });
    m_pTimeLabTimer->start();

    /* 界面处理信号 */
    connect(MyEvent::GetInstance(), &MyEvent::SIG_setMainMenuVisible, this, &ApplicationWindow::SetMainMenuVisible);
    connect(MyEvent::GetInstance(), &MyEvent::SIG_showLogin, this, &ApplicationWindow::ShowLogin);
    connect(MyEvent::GetInstance(), &MyEvent::SIG_showReg, this, &ApplicationWindow::ShowReg);

    /* 设置左侧导航按钮 */
    ui->LeftMainWidget->setFixedWidth(200);
    QSize icoSize(32, 32);
    int icoWidth = 85;
    QList<QPushButton *> tbtns = ui->FunctionBtnBox->findChildren<QPushButton *>();
    foreach (QPushButton *btn, tbtns)
    {
        btn->setIconSize(icoSize);
        btn->setMinimumWidth(icoWidth);
        btn->setCheckable(true);
        connect(btn, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
    }

    /* 登录、注册事件绑定 */
    connect(MyEvent::GetInstance(), &MyEvent::SIG_userLogin, this, &ApplicationWindow::SLOT_loginCommit);
    connect(MyEvent::GetInstance(), &MyEvent::SIG_userReg, this, &ApplicationWindow::SLOT_regCommit);
    connect(MyEvent::GetInstance(), &MyEvent::SIG_rebellionMainMenuVisible, [=]
    {
        ui->LeftMainWidget->setVisible(!ui->LeftMainWidget->isVisible());
    });

    /* 视频回放界面 */
    connect(ui->VideoRecordPage, &VideoRecordWidget::SendVideoId, this, &ApplicationWindow::Switch2VideoView);

    /* */

#if NET_DEBUG
//    /* 初始化客户端中介 */
    m_pClient = new TcpClient();
    m_pClient->InitNetwork();
    m_pClient->ConnectToServer();
    connect(m_pClient, &TcpClient::SIG_ReadyData, this, &ApplicationWindow::ClientDealData);
#endif

    emit ui->VideoRecordBtn->clicked();

}

ApplicationWindow::~ApplicationWindow()
{
    delete ui;
}

void ApplicationWindow::ShowLogin()
{
    if(!m_pLoginDlg)
    {
        m_pLoginDlg = new LoginDialog(this);
    }

    int res = m_pLoginDlg->exec();
    if(res == LoginDialog::LOGIN_SUCCEED)
    {
        m_pLoginDlg->deleteLater();
        show();
    }
    else if(res == LoginDialog::TO_REG)
    {
        emit MyEvent::GetInstance()->SIG_showReg();
        return;
    }
    else if(res == LoginDialog::LOGIN_FAILED)
    {   /* 小坑待填，QDialog直接点×退出返回是0，这里将自定义的枚举也设置为0做匹配 */
        qDebug() << "ApplicationWindow::ShowLogin() : login failed";
        exit(0);
    }
}

void ApplicationWindow::ShowReg()
{
    if(!m_pRegDlg)
    {
        m_pRegDlg = new RegisterDialog(this);
    }
    int res = m_pRegDlg->exec();
    if(res == RegisterDialog::REGISTED)
    {
        m_pRegDlg->deleteLater();
        show();
    }
    else if(res == RegisterDialog::TO_LOGIN)
    {
        emit MyEvent::GetInstance()->SIG_showLogin();
        return;
    }
    else if(res == RegisterDialog::REGISTE_FAILED)
    {
        qDebug() << "ApplicationWindow::ShowReg() :" << "RegDlg returned REGISTE_FAILED";
        exit(0);
    }
}

void ApplicationWindow::ButtonsClicked()
{
    QPushButton *b = (QPushButton *)sender();
    QString name = b->text();

    QList<QPushButton *> tbtns = ui->FunctionBtnBox->findChildren<QPushButton *>();
    foreach (QPushButton *btn, tbtns)
    {
        if (btn == b)
        {
            btn->setChecked(true);
        } else {
            btn->setChecked(false);
        }
    }

    /* 从视频播放界面切换到功能界面 */
    ui->RightMainStack->setCurrentWidget(ui->FunctionWidget);
        /* 根据按钮选择此时的功能界面 */
    if (name == "视频记录")
    {
        ui->FunctionStack->setCurrentIndex(0);
    }
    else if (name == "行车模式")
    {
        ui->FunctionStack->setCurrentIndex(1);
    }
    else if (name == "倒车模式")
    {
        ui->FunctionStack->setCurrentIndex(2);
    }
    else if (name == "鸟瞰模式")
    {
        ui->FunctionStack->setCurrentIndex(3);
    }
    else if (name == "特征记录")
    {
        ui->FunctionStack->setCurrentIndex(4);
    }
    else if(name == "系统设置")
    {
        ui->FunctionStack->setCurrentIndex(5);
    }
    else if(name == "退出系统")
    {
        exit(0);
    }
}


void ApplicationWindow::Switch2VideoView(int id)
{
    ui->VideoPage->SetVideoId(id);
    ui->RightMainStack->setCurrentWidget(ui->VideoPage);
}

void ApplicationWindow::SetMainMenuVisible(bool visible)
{
    ui->LeftMainWidget->setVisible(visible);
}

void ApplicationWindow::ClientDealData(char* head, char *buf, int len)
{
    BAG_HEAD_T* pHead = reinterpret_cast<BAG_HEAD_T*>(head);
    /* 处理回包 */
    switch (pHead->type) {
    case TYPE_LOGIN_RES_BAG:
        DealLoginRes(buf, len);
        break;
    case TYPE_REGISTER_RES_BAG:
        DealRegRes(buf, len);
        break;
    }
}

void ApplicationWindow::DealLoginRes(char *buf, int len)
{
    BAG_LOGIN_RES_T* rs = reinterpret_cast<BAG_LOGIN_RES_T*>(buf);
    qDebug() << "DealLoginRes : error_msg = "<< rs->error_msg;
    emit MyEvent::GetInstance()->SIG_dealRegRs(1);
}

void ApplicationWindow::DealRegRes(char *buf, int len)
{
    BAG_REGISTER_RES_T* rs = reinterpret_cast<BAG_REGISTER_RES_T*>(buf);
    qDebug() << "DealRegRes : acc_num =" << "res =" << rs->res << "error_msg =" << rs->error_msg;
}


void ApplicationWindow::SLOT_loginCommit(QString acc, QString pwd)
{

#if NET_DEBUG == 0
//    /* 暂时不去提交，在这里做程序的调试 */
    emit MyEvent::GetInstance()->SIG_dealLoginRs(1);

#else

    BAG_HEAD_T head;
    head.type = TYPE_LOGIN_BAG;
    head.data_size = sizeof(BAG_LOGIN_T);

    BAG_LOGIN_T rq;
    char* pAcc = const_cast<char*>(acc.toStdString().c_str());
    strcpy(rq.user_ID, pAcc);

    char* pPwd = const_cast<char*>(pwd.toStdString().c_str());
    strcpy(rq.pwd, pPwd);

    qDebug() << "ApplicationWindow::SLOT_loginCommit :" << "acc=" << rq.user_ID << "pwd=" << rq.pwd ;

    //........
#endif


}

void ApplicationWindow::SLOT_regCommit(QString nickName, QString pwd)
{
    BAG_HEAD_T head;
    head.type = TYPE_REGISTER_BAG;
    head.data_size = sizeof(BAG_REGISTER_T);
    strcpy(head.request_time, CURRENT_TIME);
    head.CRC_check_code = '1';

    BAG_REGISTER_T rq;
    char* pNickName = const_cast<char*>(nickName.toStdString().c_str());
    strcpy(rq.name, pNickName);

    char* pPwd = const_cast<char*>(pwd.toStdString().c_str());
    strcpy(rq.pwd, pPwd);


    strcpy(rq.num, "test");



    qDebug() << "ApplicationWindow::SLOT_regCommit :" << "nickName =" << rq.name << " pwd =" << rq.pwd;

    //........
//    m_pClient->SendData((char*)&head, (char*)&rq, sizeof(BAG_REGISTER_T));

}

