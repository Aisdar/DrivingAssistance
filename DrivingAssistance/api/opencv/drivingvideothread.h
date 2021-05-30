#ifndef DRIVINGVIDEOTHREAD_H
#define DRIVINGVIDEOTHREAD_H

#include "mythread.h"
#include <QString>
#include <QImage>

#define CV_FILE_MODE true
#define CV_CAMERA_MODE false

class DrivingVideoThread : public MyThread
{
    Q_OBJECT
public:
    DrivingVideoThread(QString path, bool fileMode, QObject* parent = Q_NULLPTR);
    DrivingVideoThread(QObject* parent = Q_NULLPTR);
    ~DrivingVideoThread();
    void setVideoPath(QString path);
    void setMode(bool fileMode);
    QString getVideoPath();

private:
    QString m_videoPath;
    bool m_fileMode;
    QImage m_img;

protected:
    void run();

signals:
    void SendImg(QImage m_img);
};

#endif // DRIVINGVIDEOTHREAD_H
