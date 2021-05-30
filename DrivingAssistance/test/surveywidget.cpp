#include "surveywidget.h"
#include "ui_surveywidget.h"

SurveyWidget::SurveyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SurveyWidget)
{
    ui->setupUi(this);
}

SurveyWidget::~SurveyWidget()
{
    delete ui;
}
