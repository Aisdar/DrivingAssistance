#ifndef APPLICATIONWINDOW_H
#define APPLICATIONWINDOW_H

#include <QWidget>
#include "tcpclient.h"

namespace Ui {
class ApplicationWindow;
}

class ApplicationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ApplicationWindow(QWidget *parent = nullptr);
    ~ApplicationWindow();

private slots:
    /* 界面处理 */
    void ButtonsClicked();

    /* 业务处理 */
    void ClientDealData(int type, char* buf, int len);
    void DealLoginRes(char* buf, int len);

private:
    Ui::ApplicationWindow *ui;
    TcpClient *m_pClient;


};

#endif // APPLICATIONWINDOW_H
