#ifndef VIDEOITEM_H
#define VIDEOITEM_H

#include <QWidget>

namespace Ui {
class VideoItem;
}

class VideoItem : public QWidget
{
    Q_OBJECT

public:
    explicit VideoItem(QWidget *parent = nullptr);
    explicit VideoItem(QString path, QString recordTime, double watchedPercent, int videoId, QWidget *parent = nullptr);
    ~VideoItem();
    void SetIcon(QString path);
    void SetWatchedPercent(double watchedPercent);
    void SetRecordTime(QString recordTime);
    void SetVideoId(int id);

signals:
    void SendVideoId(int id);

private slots:
    void on_PlayBtn_clicked();

private:
    Ui::VideoItem *ui;
    int m_videoId;            // 视频ID
};

#endif // VIDEOITEM_H
