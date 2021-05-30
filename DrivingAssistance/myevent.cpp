#include "myevent.h"

MyEvent* MyEvent::instance = nullptr;

MyEvent::MyEvent(QObject *parent) : QObject(parent)
{
}

MyEvent *MyEvent::GetInstance()
{
    if(!instance)
    {
        instance = new MyEvent;
    }
    return instance;
}
