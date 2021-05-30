#include "videorecordwidget.h"
#include "ui_videorecordwidget.h"
#include "videoitem.h"
#include "myhelper.h"
#include <QDebug>

VideoRecordWidget::VideoRecordWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoRecordWidget)
{
    ui->setupUi(this);
    for(int i = 0; i < 10; i++)
    {
        AddItem(":/resource/img/img_damaged-60.png", CURRENT_TIME, 100, i);
    }
}

void VideoRecordWidget::AddItem(QString coverPath, QString recoredTime, double watchedPercent, int videoId)
{
    VideoItem* item = new VideoItem(coverPath, recoredTime,  watchedPercent, videoId);
    connect(item, &VideoItem::SendVideoId, this, &VideoRecordWidget::DealVideoId);
    ui->scrollAreaWidgetContents->layout()->addWidget(item);
}

VideoRecordWidget::~VideoRecordWidget()
{
    delete ui;
}

void VideoRecordWidget::DealVideoId(int id)
{
    qDebug() << QString("VideoRecordWidget::DealVideoId : 播放 %1 视频").arg(id);
    SendVideoId(id);
}

