#include "settingwidget.h"
#include "ui_settingwidget.h"
#include "api/config/myconfig.h"
#include "frmmessagebox.h"

SettingWidget::SettingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingWidget)
{
    ui->setupUi(this);
    InitSettings();
}

SettingWidget::~SettingWidget()
{
    delete ui;
}

Ui::SettingWidget *SettingWidget::getUi()
{
    return ui;
}

void SettingWidget::InitSettings()
{
    ui->IPEdit->setText(MyConfig::serverIP);
    ui->PortEdit->setText(QString::number(MyConfig::serverPort));
    ui->AutoDeleteCheck->setCheckState(MyConfig::bAutoDelete
                                       ? Qt::CheckState::Checked : Qt::CheckState::Unchecked);
    ui->LocalMemoryEdit->setText(QString::number(MyConfig::maxStorageSize));
}

void SettingWidget::on_OKBtn_clicked()
{
    MyConfig::serverIP = ui->IPEdit->text();
    MyConfig::serverPort = ui->PortEdit->text().toInt();
    MyConfig::bAutoDelete = ui->AutoDeleteCheck->checkState() == Qt::CheckState::Checked
                            ? true : false;
    MyConfig::maxStorageSize = ui->LocalMemoryEdit->text().toInt();
    MyConfig::WriteConfig();
    frmMessageBox msg;
    msg.SetMessage("配置成功，重启生效", frmMessageBox::INFO);
    msg.exec();
}

void SettingWidget::on_RevertBtn_clicked()
{
    InitSettings();
}
