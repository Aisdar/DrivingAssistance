#ifndef DRIVINGWIDGET_H
#define DRIVINGWIDGET_H

#include <QWidget>

namespace Ui {
class DrivingWidget;
}

class DrivingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DrivingWidget(QWidget *parent = nullptr);
    ~DrivingWidget();

private:
    Ui::DrivingWidget *ui;
};

#endif // DRIVINGWIDGET_H
