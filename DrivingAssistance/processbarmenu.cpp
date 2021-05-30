#include "processbarmenu.h"
#include "ui_processbarmenu.h"

ProcessBarMenu::ProcessBarMenu(QWidget *parent) :
    QWidget(parent),
    m_bPause(false),
    ui(new Ui::ProcessBarMenu)
{
    ui->setupUi(this);
    // 进度条菜单固定高度
    this->setFixedHeight(80);

    // 处理上一个、下一个、暂停...... 的信号
    QList<QToolButton*> tbtns = ui->BottomMainWidget->findChildren<QToolButton*>();
    foreach(QToolButton *btn, tbtns)
    {
        connect(btn, SIGNAL(clicked()), this, SLOT(ButtonClicked()));
    }
}

ProcessBarMenu::~ProcessBarMenu()
{
    delete ui;
}

void ProcessBarMenu::SetCurrentPlayTime(QString time)
{
    ui->CurrentTimeLab->setText(time);
}

void ProcessBarMenu::SetTotalPlayTime(QString time)
{
    ui->TotalTimeLab->setText(time);
}

Ui::ProcessBarMenu* ProcessBarMenu::GetUi()
{
    return ui;
}


void ProcessBarMenu::ButtonClicked()
{
    QToolButton* btn = qobject_cast<QToolButton*>(sender());
    if(btn == ui->StartBtn)
    {
        m_bPause = !m_bPause;
        ui->StartBtn->setIcon(QIcon(m_bPause
                                  ? ":/resource/icon/icon_pause.png"
                                  : ":/resource/icon/icon_start.png"));
        emit m_bPause ? pause() : start();
    }
    else if(btn == ui->StopBtn)
    {
        emit stop();
    }
    else if(btn == ui->LastBtn)
    {
        emit last();
    }
    else if(btn == ui->NextBtn)
    {
        emit next();
    }
}

