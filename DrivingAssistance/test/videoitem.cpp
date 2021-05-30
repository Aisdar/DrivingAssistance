#include "videoitem.h"
#include "ui_videoitem.h"

VideoItem::VideoItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoItem)
{
    ui->setupUi(this);
}

VideoItem::~VideoItem()
{
    delete ui;
}

void VideoItem::SetIcon(QString path)
{


}
