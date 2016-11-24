#include "view_menu.h"

ViewMenu::ViewMenu(QWidget* parent) : QMenu(parent){
  this->setTitle(tr("&View"));

  mainToolbarAction = new QAction("&Main Toolbar",nullptr);
  statusBarAction = new QAction("&Status Bar",nullptr);
  colorizeAction = new QAction("&Colorize Packet List",nullptr);

  mainToolbarAction->setCheckable(true);
  statusBarAction->setCheckable(true);
  colorizeAction->setCheckable(true);

  this->addAction(mainToolbarAction);
  this->addAction(statusBarAction);

  this->addSeparator();

  this->addAction(colorizeAction);
}
