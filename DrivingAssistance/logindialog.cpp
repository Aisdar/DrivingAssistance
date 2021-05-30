#include "logindialog.h"
#include "ui_logindialog.h"
#include "frmmessagebox.h"
#include "registerdialog.h"
#include "myevent.h"
#include "myhelper.h"
#include "myconfig.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    MyHelper::formInCenter(this, MyConfig::deskWidth, MyConfig::deskHeight);
    connect(MyEvent::GetInstance(), &MyEvent::SIG_dealLoginRs, this, &LoginDialog::SLOT_dealLoginRs);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}


void LoginDialog::on_LoginBtn_clicked()
{
    QString acc = ui->AccEdit->text();
    QString pwd = ui->PwdEdit->text();
    if(acc.length() == 0 || pwd.length() == 0)
    {
        frmMessageBox msg;
        msg.SetMessage("账号或密码不能为空", frmMessageBox::ERROR);
        msg.exec();
        return;
    }
    /* 文本正则 */
//    QRegExp reg("[a-zA-Z0-9]{1,10}");
//    reg.exactMatch(acc);
    /* 通过全局事件发射信号 */
    emit MyEvent::GetInstance()->SIG_userLogin(acc, pwd);
}

void LoginDialog::on_RegBtn_clicked()
{
    done(TO_REG);
}

void LoginDialog::SLOT_dealLoginRs(int status)
{
    if(status < 0)
    {
        frmMessageBox msg;
        msg.SetMessage("登陆失败", frmMessageBox::ERROR);
        msg.exec();
        done(LOGIN_FAILED);
    }
    else
    {
        frmMessageBox msg;
        msg.SetMessage("登陆成功", frmMessageBox::INFO);
        msg.exec();
        done(LOGIN_SUCCEED);
    }

}
