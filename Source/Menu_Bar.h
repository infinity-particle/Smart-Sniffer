#ifndef MENUBAR_H
#define MENUBAR_H

#include <QWidget>
#include <QMenuBar>
#include "capture_menu.h"
#include "view_menu.h"

class MenuBar: public QMenuBar {
    Q_OBJECT

  public:
    MenuBar(QWidget* parent = 0);
    ~MenuBar();

  private:
    CaptureMenu* capture;
    ViewMenu* view;
};

#endif // MENUBAR_H
