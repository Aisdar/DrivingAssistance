#include "drivingvideothread.h"
#include "myopencv.h"

DrivingVideoThread::DrivingVideoThread(QString path, bool fileMode, QObject *parent)
    :MyThread(parent),
     m_videoPath(path),
     m_fileMode(fileMode),
     m_img()
{

}

DrivingVideoThread::DrivingVideoThread(QObject* parent)
    :MyThread(parent),
     m_videoPath(),
     m_fileMode(false),
     m_img()
{

}

DrivingVideoThread::~DrivingVideoThread()
{

}

void DrivingVideoThread::setVideoPath(QString path)
{
    m_videoPath = path;
}

void DrivingVideoThread::setMode(bool fileMode)
{
    m_fileMode = fileMode;
}

QString DrivingVideoThread::getVideoPath()
{
    return m_videoPath;
}

void DrivingVideoThread::run()
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
    CascadeClassifier cascade("./CASCADE/cars.xml");
    if(cascade.empty())
    {
        qDebug() << "DrivingVideoThread : cascade is null";
    }
    while(!stopFlag)
    {

        //////// process
        cap >> frame;
        if(frame.empty())
        {
            qDebug() << "DrivingVideoThread : no frame";
            continue;
        }
        frame = MyOpenCV::DetecCarDraw(frame, cascade, 2);
        m_img = MyOpenCV::cvMat2QImage(frame);
        emit SendImg(m_img);
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
