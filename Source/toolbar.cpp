#include "toolbar.h"

ToolBar::ToolBar(QWidget* parent) : QToolBar(parent){
  startIcon = new QIcon(":/Icons/play.png");
  stopIcon = new QIcon(":/Icons/stop.png");
  settingsIcon = new QIcon(":/Icons/settings.png");
  filterIcon = new QIcon(":/Icons/filter.png");

  startAction = new QAction(*startIcon,"&Start capture",nullptr);
  stopAction = new QAction(*stopIcon,"&Stop capture",nullptr);
  settingsAction = new QAction(*settingsIcon,"&Settings",nullptr);
  filterAction = new QAction(*filterIcon,"&Filter",nullptr);

  this->setMovable(false);

  this->addAction(startAction);
  this->addAction(stopAction);
  this->addSeparator();
  this->addAction(settingsAction);
  this->addSeparator();
  this->addAction(filterAction);
}

void ToolBar::start(){

}

void ToolBar::stop(){

}

void ToolBar::settings(){

}

void ToolBar::filter(){

}

ToolBar::~ToolBar(){

}
