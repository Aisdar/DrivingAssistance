#include "applicationwindow.h"
#include "ui_applicationwindow.h"
#include "packet.h"
#include "myconfig.h"
#include "myhelper.h"

#include <QDesktopWidget>
#include <QDebug>


ApplicationWindow::ApplicationWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplicationWindow)
{
    ui->setupUi(this);

    /* 界面位置初始化居中 */
    MyHelper::formInCenter(this, MyConfig::deskWidth, MyConfig::deskHeight);

    /* 假装有开机动画，延时一下 */
//    QThread::sleep(2);

    /* 设置左侧导航按钮 */
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

//    /* 初始化客户端中介 */
//    m_pClient = new TcpClient();
//    m_pClient->InitNetwork();
//    m_pClient->ConnectToServer();



}

ApplicationWindow::~ApplicationWindow()
{
    delete ui;
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

void ApplicationWindow::ClientDealData(int type, char *buf, int len)
{
    /* 处理回包 */
    switch (type) {
    case TYPE_LOGIN_RES_BAG:
        DealLoginRes(buf, len);
        break;
    }
}

void ApplicationWindow::DealLoginRes(char *buf, int len)
{
    BAG_LOGIN_RES_T* rs = reinterpret_cast<BAG_LOGIN_RES_T*>(buf);
    qDebug() << "DealLoginRes : error_msg = "<< rs->error_msg;
}

