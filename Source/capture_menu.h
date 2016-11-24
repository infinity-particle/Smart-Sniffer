#ifndef CAPTUREMENU_H
#define CAPTUREMENU_H

#include <QString>
#include <QWidget>
#include <QMenu>

class CaptureMenu: public QMenu{
    Q_OBJECT

  public:
    CaptureMenu(QWidget* parent = nullptr);
    ~CaptureMenu();

  public slots:
    void options();
    void startCapture();
    void stopCapture();
    void filters();

  private:
    QAction* optionsAction;
    QAction* startAction;
    QAction* stopAction;
    QAction* filtersAction;
};

#endif // CAPTUREMENU_H
