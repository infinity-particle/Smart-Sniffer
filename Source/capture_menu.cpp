#include "capture_menu.h"

CaptureMenu::CaptureMenu(QWidget* parent) : QMenu(parent){
  this->setTitle(tr("&Capture"));

  optionsAction = new QAction("&Options",nullptr);
  startAction = new QAction(tr("&Start capture"),nullptr);
  stopAction = new QAction(tr("&Stop capture"),nullptr);
  filtersAction = new QAction(tr("&Filters"),nullptr);

  this->addAction(optionsAction);
  this->addSeparator();

  this->addAction(startAction);
  this->addAction(stopAction);
  this->addSeparator();

  this->addAction(filtersAction);
}

CaptureMenu::~CaptureMenu(){

}

void CaptureMenu::options(){

}

void CaptureMenu::startCapture(){

}

void CaptureMenu::stopCapture(){

}

void CaptureMenu::filters(){

}
