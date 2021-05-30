#ifndef VIDEORECORDWIDGET_H
#define VIDEORECORDWIDGET_H

#include <QWidget>

namespace Ui {
class VideoRecordWidget;
}

class VideoItem;

class VideoRecordWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VideoRecordWidget(QWidget *parent = nullptr);
    void AddItem(QString coverPath, QString recoredTime, double watchedPercent, int videoId);
    ~VideoRecordWidget();

signals:
    void SendVideoId(int id);

private slots:
    void DealVideoId(int id);

private:
    Ui::VideoRecordWidget *ui;
    QList<VideoItem*> m_itmeList;

};

#endif // VIDEORECORDWIDGET_H
