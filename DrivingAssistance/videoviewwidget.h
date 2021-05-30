#ifndef VIDEOVIEWWIDGET_H
#define VIDEOVIEWWIDGET_H

#include <QWidget>

#define PROCESSBAR_WAIT_TIME 1  /* 进度条栏悬停等待时间 */

class ProcessBarMenu;

namespace Ui {
class VideoViewWidget;
}

class VideoViewWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VideoViewWidget(QWidget *parent = nullptr);
    ~VideoViewWidget();
    void SetVideoId(int id);

protected:
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void leaveEvent(QEvent *event);

public slots:
    void UpdataFrame(QImage img);

private:
    Ui::VideoViewWidget *ui;
    ProcessBarMenu *m_pProcessBarMenu;
    int m_currentVideoId;
    QTimer* m_pProcessBarTimer;
};

#endif // VIDEOVIEWWIDGET_H
