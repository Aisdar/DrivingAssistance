#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "myhelper.h"
#include "myconfig.h"
#include "myevent.h"
#include "frmmessagebox.h"


RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    MyHelper::formInCenter(this, MyConfig::deskWidth, MyConfig::deskHeight);
    connect(MyEvent::GetInstance(), &MyEvent::SIG_dealRegRs, this, &RegisterDialog::SLOT_dealRegRs);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_RegBtn_clicked()
{
    QString nickName = ui->NickNameEdit->text();
    QString pwd = ui->PwdEdit->text();
    QString checkPwd = ui->CheckPwdEdit->text();

    /* 注册信息本地检测 */
    // ......

    MyEvent::GetInstance()->SIG_userReg(nickName, pwd);
}

void RegisterDialog::on_BackBtn_clicked()
{
    done(TO_LOGIN);
    close();
}

void RegisterDialog::SLOT_dealRegRs(int status)
{
    if(status < 0)
    {
        frmMessageBox msg;
        msg.SetMessage("注册失败", frmMessageBox::ERROR);
        msg.exec();
    }
    else
    {
        frmMessageBox msg;
        msg.SetMessage("注册成功", frmMessageBox::INFO);
        msg.exec();
    }
}
