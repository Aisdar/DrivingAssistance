#ifndef APPLICATIONWINDOW_H
#define APPLICATIONWINDOW_H

#include <QWidget>
#include "tcpclient.h"

#define NET_DEBUG 0

class LoginDialog;
class RegisterDialog;

namespace Ui {
class ApplicationWindow;
}

class ApplicationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ApplicationWindow(QWidget *parent = nullptr);
    ~ApplicationWindow();

public slots:
    void ShowReg();
    void ShowLogin();

private slots:
    /* 界面处理 */
    void ButtonsClicked();
    void Switch2VideoView(int id);
    void SetMainMenuVisible(bool visible);

    /* 业务处理 */
    void SLOT_loginCommit(QString acc, QString pwd);
    void SLOT_regCommit(QString nickName, QString pwd);
    void ClientDealData(char *head, char* buf, int len);
    void DealLoginRes(char* buf, int len);
    void DealRegRes(char* buf, int len);

private:
    Ui::ApplicationWindow *ui;
    LoginDialog* m_pLoginDlg;
    RegisterDialog* m_pRegDlg;
    TcpClient *m_pClient;
    QTimer *m_pTimeLabTimer;


};

#endif // APPLICATIONWINDOW_H
