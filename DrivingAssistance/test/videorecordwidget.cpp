#include "videorecordwidget.h"
#include "ui_videorecordwidget.h"

VideoRecordWidget::VideoRecordWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoRecordWidget)
{
    ui->setupUi(this);
}

VideoRecordWidget::~VideoRecordWidget()
{
    delete ui;
}
