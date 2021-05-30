#ifndef FEATUREWIDGET_H
#define FEATUREWIDGET_H

#include <QWidget>

namespace Ui {
class FeatureWidget;
}

class FeatureWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FeatureWidget(QWidget *parent = nullptr);
    ~FeatureWidget();

private:
    Ui::FeatureWidget *ui;
};

#endif // FEATUREWIDGET_H
