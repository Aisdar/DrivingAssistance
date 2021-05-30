#include "logindialog.h"
#include "registerdialog.h"
#include "applicationwindow.h"
#include "tcpclient.h"
#include "videoitem.h"
#include <processbarmenu.h>
#include <QThread>
#include <QSplashScreen>
#include <QDebug>

/*-------------------*/
#include <QApplication>
#include <QDesktopWidget>
#include "api/config/myconfig.h"

#define APP_DEBUG 1

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    LoginDialog login;
//    login.show();
//    RegisterDialog reg;
//    reg.show();

    // 开机动画
//    QPixmap pixmap(":/resource/img/logo_free.png");
//    QSplashScreen splash(pixmap);
//    splash.show();
//    a.processEvents();

//    ApplicationWindow applicationWindow;
//    applicationWindow.show();

//    splash.finish(&applicationWindow);


//    ApplicationWindow applicationWindow;
//    applicationWindow.show();

//    /* Net Test */
//    TcpClient client;
//    client.InitNetwork();
//    if(client.ConnectToServer() > 0)
//    {
//        qDebug("connect succeed");
//    }

    /* 视频进度条 */
    VideoItem videoItem;
    videoItem.show();

//    /* 进度条 */
//    ProcessBarMenu menu;
//    menu.show();


#if APP_DEBUG
    /* 初始化应用配置 */
    a.setApplicationName("DrivingAssistance-OMO200908");                //设置应用程序名称
    a.setApplicationVersion("V1.0");                                    //设置应用程序版本
    MyConfig::appPath = QCoreApplication::applicationDirPath() + "/";
    MyConfig::deskWidth = qApp->desktop()->availableGeometry().width();
    MyConfig::deskHeight = qApp->desktop()->availableGeometry().height();

    /* 读取配置文件 */
    MyConfig::WriteConfig();

    ApplicationWindow applicationWindow;
    applicationWindow.show();
#endif


    return a.exec();
}

