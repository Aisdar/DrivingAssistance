#include "mythread.h"

MyThread::MyThread(QObject *parent)
   : QThread(parent),
     pauseFlag(false),
     stopFlag(false)
{

}

MyThread::~MyThread()
{
    stop();
}

MyThread::State MyThread::state() const
{
    State s = Stoped;
    if (!QThread::isRunning())
    {
        s = Stoped;
    }
    else if (QThread::isRunning() && pauseFlag)
    {
        s = Paused;
    }
    else if (QThread::isRunning() && (!pauseFlag))
    {
        s = Running;
    }
    return s;
}

void MyThread::start(QThread::Priority pri)
{
    QThread::start(pri);
}

void MyThread::stop()
{
    if (QThread::isRunning())
    {
        stopFlag = true;
        condition.wakeAll();
        QThread::quit();
        QThread::wait();
    }
}

void MyThread::pause()
{
    if (QThread::isRunning())
    {
        pauseFlag = true;
    }
}

void MyThread::resume()
{
    if (QThread::isRunning())
    {
        pauseFlag = false;
        condition.wakeAll();
    }
}
