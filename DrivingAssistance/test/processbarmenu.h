#ifndef PROCESSBARMENU_H
#define PROCESSBARMENU_H

#include <QWidget>

namespace Ui {
class ProcessBarMenu;
}

class ProcessBarMenu : public QWidget
{
    Q_OBJECT

public:
    explicit ProcessBarMenu(QWidget *parent = nullptr);
    ~ProcessBarMenu();

private:
    bool m_bPause;

signals:
    void start();
    void pause();
    void next();
    void last();
    void stop();

private slots:
    void ButtonClicked();

private:
    Ui::ProcessBarMenu *ui;
};

#endif // PROCESSBARMENU_H
