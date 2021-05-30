#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <atomic>
#include <QMutex>
#include <QWaitCondition>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread(QObject* parent = Q_NULLPTR);
    ~MyThread() override;

    enum State
    {
        Stoped,     ///<停止状态，包括从未启动过和启动后被停止
        Running,    ///<运行状态
        Paused      ///<暂停状态
    };
    State state() const;

public slots:
    void start(Priority pri = InheritPriority);
    void stop();
    void pause();
    void resume();

protected:
    std::atomic_bool pauseFlag;
    std::atomic_bool stopFlag;
    QMutex mutex;
    QWaitCondition condition;
};

#endif // MYTHREAD_H
