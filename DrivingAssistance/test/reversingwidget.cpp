#include "reversingwidget.h"
#include "ui_reversingwidget.h"

ReversingWidget::ReversingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReversingWidget)
{
    ui->setupUi(this);
}

ReversingWidget::~ReversingWidget()
{
    delete ui;
}
