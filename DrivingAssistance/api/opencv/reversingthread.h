#ifndef REVERSINGTHREAD_H
#define REVERSINGTHREAD_H

#include "mythread.h"
#include <QImage>

#define CV_FILE_MODE true
#define CV_CAMERA_MODE false

class ReversingThread : public MyThread
{
    Q_OBJECT
public:
    ReversingThread(QString path, bool fileMode, QObject* parent = Q_NULLPTR);
    ReversingThread(QObject* parent = Q_NULLPTR);
    void setVideoPath(QString path);
    void setMode(bool fileMode);
    QString getVideoPath();

protected:
    void run();

private:
    QString m_videoPath;
    bool m_fileMode;
    QImage m_img;

signals:
    void SendImg(QImage m_img);
};

#endif // REVERSINGTHREAD_H
