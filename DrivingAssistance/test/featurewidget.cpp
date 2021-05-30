#include "featurewidget.h"
#include "ui_featurewidget.h"

FeatureWidget::FeatureWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FeatureWidget)
{
    ui->setupUi(this);
}

FeatureWidget::~FeatureWidget()
{
    delete ui;
}
