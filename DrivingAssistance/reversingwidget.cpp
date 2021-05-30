#include "reversingwidget.h"
#include "ui_reversingwidget.h"
#include "mymenuwidget.h"
#include "reversingthread.h"
#include "myevent.h"
#include "myconfig.h"
#include <QPainter>
#include <QTimer>
#include <QPushButton>
#include <QMouseEvent>

ReversingWidget::ReversingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReversingWidget),
    m_pReversingThread(new ReversingThread())
{
    ui->setupUi(this);
    /* 顶部菜单 */
    m_pMenu = new MyMenuWidget(this);
    m_pMenu->hide();
    QPushButton* menuBtn =  m_pMenu->AddButton(":/resource/icon/icon_menu.png", "菜单");
    menuBtn->setFixedSize(QSize(100, 50));
    connect(menuBtn, &QPushButton::clicked, [=]
    {   /* 显示\关闭菜单 */
        emit MyEvent::GetInstance()->SIG_rebellionMainMenuVisible();
    });

    m_pMenuTimer = new QTimer();
    m_pMenuTimer->setInterval(1000);
    connect(m_pMenuTimer, &QTimer::timeout, [=]
    {
        m_pMenu->hide();
        m_pMenuTimer->stop();
    });

    /* 视频线程 */
    m_pReversingThread->setVideoPath(MyConfig::reversingVideoPath);
    m_pReversingThread->setMode(CV_FILE_MODE);
    connect(m_pReversingThread, &ReversingThread::SendImg, this, &ReversingWidget::UpdataFrame);
    m_pReversingThread->start();
}

ReversingWidget::~ReversingWidget()
{
    delete ui;
}

void ReversingWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    if(!m_img.isNull())
    {
        QPainter painter(this);
        painter.drawImage(this->rect(), m_img);
    }
}

void ReversingWidget::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    /* 菜单已经显示 && 菜单计时器已启动 */
    if(m_pMenu->isVisible() && m_pMenuTimer->isActive())
    {
        return;
    }
    else
    {   /* 菜单未显示 */
        /* 菜单面版贴靠底部 */
        QRect processRect = QRect(0, 0, width(), m_pMenu->height());
        if(processRect.contains(event->pos()))
        {   /* 鼠标在指定区域 */
            m_pMenu->setGeometry(processRect);
            m_pMenu->show();
        }
        else
        {   /* 鼠标离开指定区域 */
            m_pMenuTimer->start();
        }
    }
}

void ReversingWidget::UpdataFrame(QImage img)
{
    m_img = img;
    update();
}
