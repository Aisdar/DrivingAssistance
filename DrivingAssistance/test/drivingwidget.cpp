#include "drivingwidget.h"
#include "ui_drivingwidget.h"

DrivingWidget::DrivingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrivingWidget)
{
    ui->setupUi(this);
}

DrivingWidget::~DrivingWidget()
{
    delete ui;
}
