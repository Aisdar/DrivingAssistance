#ifndef DRIVINGWIDGET_H
#define DRIVINGWIDGET_H

#include <QWidget>

class DrivingVideoThread;
class MyMenuWidget;
class QTimer;

namespace Ui {
class DrivingWidget;
}

class DrivingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DrivingWidget(QWidget *parent = nullptr);
    ~DrivingWidget();

protected:
    virtual void paintEvent(QPaintEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);

public slots:
    void UpdataFrame(QImage img);

private:
    Ui::DrivingWidget *ui;
    DrivingVideoThread *m_pDrivingThread;
    MyMenuWidget *m_pMenu;
    QTimer* m_pMenuTimer;
    QImage m_img;

};

#endif // DRIVINGWIDGET_H
