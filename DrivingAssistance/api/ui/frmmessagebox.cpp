#include "frmmessagebox.h"
#include "ui_frmmessagebox.h"
#include "myhelper.h"
#include "myconfig.h"
#include <QMouseEvent>

frmMessageBox::frmMessageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmMessageBox)
{
    ui->setupUi(this);
    InitStyle();
    MyHelper::formInCenter(this, MyConfig::deskWidth, MyConfig::deskHeight);
}

frmMessageBox::~frmMessageBox()
{
    delete ui;
}

void frmMessageBox::SetContentText(QString text)
{
    ui->TextLab->setText(text);
}

void frmMessageBox::SetMessage(QString msg, MsgType type)
{
    if (type == INFO)
    {
        ui->IconLab->setStyleSheet("border-image: url(:/resource/icon/icon_info.png);");
        ui->ClostBtn->setVisible(false);
        ui->TitleTextLab->setText("提示");
    }
    else if (type == QUESTION)
    {
        ui->IconLab->setStyleSheet("border-image: url(:/resource/icon/icon_question.png);");
        ui->TitleTextLab->setText("询问");
    }
    else if (type == ERROR)
    {
        ui->IconLab->setStyleSheet("border-image: url(:/resource/icon/icon_error.png);");
        ui->ClostBtn->setVisible(false);
        ui->CancelBtn->setVisible(false);
        ui->TitleTextLab->setText("错误");
    }

    ui->TextLab->setText(msg);
    setWindowTitle(ui->TitleTextLab->text());
}

void frmMessageBox::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton))
    {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void frmMessageBox::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton)
    {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void frmMessageBox::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void frmMessageBox::InitStyle()
{
//    this->setProperty("Form",true);
    setFixedSize(255, 130);
    // 设置窗体标题栏隐藏
    setWindowFlags(Qt::FramelessWindowHint);
    // 关联关闭按钮
    connect(ui->ClostBtn, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->CancelBtn, SIGNAL(clicked()), this, SLOT(close()));
}

void frmMessageBox::on_OKBtn_clicked()
{
    done(OK);
    close();
}

void frmMessageBox::on_CancelBtn_clicked()
{
    done(CANCEL);
    close();
}
