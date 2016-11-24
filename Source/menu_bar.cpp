#include "menu_bar.h"

MenuBar::MenuBar(QWidget* parent) : QMenuBar(parent){
  capture = new CaptureMenu();
  view = new ViewMenu();

  this->addMenu(view);
  this->addMenu(capture);
}

MenuBar::~MenuBar(){

}
