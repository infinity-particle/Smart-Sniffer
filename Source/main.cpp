#include "main_window.h"
#include <QApplication>
#include <QTextStream>

#define MainWindowInstance Singleton<MainWindow>::instance()

int main(int argc, char *argv[]){
  QApplication a(argc, argv);
  MainWindow w;
  w.setWindowTitle("Smart Sniffer");
  w.show();

  return a.exec();
}
