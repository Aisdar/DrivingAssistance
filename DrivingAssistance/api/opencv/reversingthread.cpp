#include "reversingthread.h"
#include "myopencv.h"

ReversingThread::ReversingThread(QString path, bool fileMode, QObject *parent)
    :MyThread (parent),
     m_videoPath(path),
     m_fileMode(fileMode)
{

}

ReversingThread::ReversingThread(QObject *parent):
    MyThread (parent)
{

}


void ReversingThread::setVideoPath(QString path)
{
    m_videoPath = path;
}

void ReversingThread::setMode(bool fileMode)
{
    m_fileMode = fileMode;
}

QString ReversingThread::getVideoPath()
{
    return m_videoPath;
}

void ReversingThread::run()
{
    VideoCapture cap;
    if(m_fileMode)
    {
        cap.open(m_videoPath.toStdString().c_str());
    }
    else {
        cap.open(0);
    }

    if(!cap.isOpened())
    {
        qDebug() << "DrivingVideoThread : open " << (m_fileMode ? m_videoPath : "camera") << "error";
    }

    Mat frame;

    while(!stopFlag)
    {

        //////// process
        cap >> frame;
        if(frame.empty())
        {
            qDebug() << "DrivingVideoThread : no frame";
            continue;
        }
        m_img = MyOpenCV::cvMat2QImage(frame);
        emit SendImg(m_img);
        msleep(40);
        //////// process

        if(pauseFlag)
        {
            mutex.lock();
            condition.wait(&mutex);
            mutex.unlock();
        }
    }
    pauseFlag = false;
    stopFlag = false;

    qDebug() << "Drving Thread exit";
}
