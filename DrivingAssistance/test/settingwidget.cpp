#include "settingwidget.h"
#include "ui_settingwidget.h"
#include "api/config/myconfig.h"

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
