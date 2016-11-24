#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <menu_bar.h>
#include "toolbar.h"
#include <QMainWindow>
#include <QTableView>
#include <QTreeView>
#include <QVBoxLayout>
#include <QHeaderView>
#include <QWidget>
#include "packet_model.h"

#define MINIMUM_MAINWINDOW_WIDTH 500
#define MINIMUM_MAINWINDOW_HEIGHT 400

class MainWindow : public QMainWindow
{
    Q_OBJECT

  public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

  private:
    MenuBar* menuBar;
    ToolBar* toolBar;
    QTableView* packetView;
    PacketModel* packetModel;
    QTreeView* packetInfo;
    QWidget* centralWidget;
    QVBoxLayout* mainLayout;
};

#endif // MAINWINDOW_H
