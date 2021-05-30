#ifndef REVERSINGWIDGET_H
#define REVERSINGWIDGET_H

#include <QWidget>

class MyMenuWidget;
class ReversingThread;

namespace Ui {
class ReversingWidget;
}

class ReversingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ReversingWidget(QWidget *parent = nullptr);
    ~ReversingWidget();

protected:
    virtual void paintEvent(QPaintEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);

public slots:
    void UpdataFrame(QImage img);

private:
    Ui::ReversingWidget *ui;
    ReversingThread *m_pReversingThread;
    MyMenuWidget *m_pMenu;
    QTimer* m_pMenuTimer;
    QImage m_img;
};

#endif // REVERSINGWIDGET_H
