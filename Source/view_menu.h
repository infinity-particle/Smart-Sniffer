#ifndef VIEWMENU_H
#define VIEWMENU_H

#include <QWidget>
#include <QMenu>

class ViewMenu: public QMenu{
    Q_OBJECT

  public:
    ViewMenu(QWidget* parent = nullptr);

  private:
    QAction* mainToolbarAction;
    QAction* statusBarAction;
    QAction* colorizeAction;
};

#endif // VIEWMENU_H
