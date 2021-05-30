#include "videoitem.h"
#include "ui_videoitem.h"
#include "myhelper.h"

VideoItem::VideoItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoItem),
    m_videoId(-1)
{
    ui->setupUi(this);
}

VideoItem::VideoItem(QString path, QString recordTime, double watchedPercent, int videoId, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoItem),
    m_videoId(videoId)
{
    ui->setupUi(this);
    SetIcon(MyHelper::FileIsExist(path) ? path : ":/resource/img/img_damaged-40.png");
    SetRecordTime(recordTime);
    SetWatchedPercent(watchedPercent);
}

VideoItem::~VideoItem()
{
    delete ui;
}

void VideoItem::SetIcon(QString path)
{
    ui->VideoIconLab->setPixmap(path);
}

void VideoItem::SetWatchedPercent(double watchedPercent)
{
    ui->ProcessLab->setText(QString("已观看 %1 %").arg(QString::number(watchedPercent)));
}

void VideoItem::SetRecordTime(QString recordTime)
{
    ui->TimeLab->setText(QString("记录于\n%1").arg(recordTime));
}

void VideoItem::SetVideoId(int id)
{
    m_videoId = id;
}

void VideoItem::on_PlayBtn_clicked()
{
    emit SendVideoId(m_videoId);
}
