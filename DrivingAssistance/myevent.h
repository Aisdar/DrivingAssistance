#ifndef MYEVENT_H
#define MYEVENT_H

#include <QObject>
#include <QString>

/* 做事件转发用的类 */
class MyEvent : public QObject
{
    Q_OBJECT
public:
    static MyEvent *GetInstance();

private:
    explicit MyEvent(QObject *parent = nullptr);
    static MyEvent* instance;

signals:
    void SIG_userLogin(QString acc, QString pwd);
    void SIG_userReg(QString nickName, QString checkPwd);
    void SIG_loginSucceed();
    void SIG_dealRegRs(int status);
    void SIG_dealLoginRs(int status);
    void SIG_showLogin();
    void SIG_showReg();

    /* 界面处理 */
    void SIG_setMainMenuVisible(bool visible);
    void SIG_rebellionMainMenuVisible();

public slots:
};

#endif // MYEVENT_H
