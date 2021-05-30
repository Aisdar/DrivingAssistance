#include "videoviewwidget.h"
#include "ui_videoviewwidget.h"
#include "processbarmenu.h"
#include <QPainter>
#include <QMouseEvent>
#include <QRect>
#include <QDebug>
#include <QTimer>
#include <QEvent>

VideoViewWidget::VideoViewWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoViewWidget)
{
    ui->setupUi(this);
    m_pProcessBarMenu = new ProcessBarMenu(this);
    m_pProcessBarMenu->hide();
    m_pProcessBarTimer = new QTimer();
    m_pProcessBarTimer->setInterval(PROCESSBAR_WAIT_TIME*1000);
    connect(m_pProcessBarTimer, &QTimer::timeout, [=]
    {
       m_pProcessBarMenu->hide();
       m_pProcessBarTimer->stop();
    });
}

VideoViewWidget::~VideoViewWidget()
{
    delete ui;
}

void VideoViewWidget::SetVideoId(int id)
{
    m_currentVideoId = id;
}

void VideoViewWidget::mouseMoveEvent(QMouseEvent *event)
{
    /* 进度条已经显示 && 进度条计时器已启动 */
    if(m_pProcessBarMenu->isVisible() && m_pProcessBarTimer->isActive())
    {
        return;
    }
    else
    {   /* 进度条未显示 */
        /* 进度条面版贴靠底部 */
        QRect processRect = QRect(0, height() - m_pProcessBarMenu->height(),
                                  width(), m_pProcessBarMenu->height());
        if(processRect.contains(event->pos()))
        {   /* 鼠标在指定区域 */
            m_pProcessBarMenu->setGeometry(processRect);
            m_pProcessBarMenu->show();
        }
        else
        {   /* 鼠标离开指定区域 */
            m_pProcessBarTimer->start();
        }
    }

}

void VideoViewWidget::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    m_pProcessBarMenu->hide();
}

void VideoViewWidget::UpdataFrame(QImage img)
{
    if(!img.isNull())
    {
        QPainter painter(ui->VideoScreenWidget);
        painter.drawImage(ui->VideoScreenWidget->rect(), img);
    }
}
