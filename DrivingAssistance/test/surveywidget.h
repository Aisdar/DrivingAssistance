#ifndef SURVEYWIDGET_H
#define SURVEYWIDGET_H

#include <QWidget>

namespace Ui {
class SurveyWidget;
}

class SurveyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SurveyWidget(QWidget *parent = nullptr);
    ~SurveyWidget();

private:
    Ui::SurveyWidget *ui;
};

#endif // SURVEYWIDGET_H
