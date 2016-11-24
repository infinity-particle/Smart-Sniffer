#include "main_window.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent){
  menuBar = new MenuBar();
  toolBar = new ToolBar();
  this->setMenuBar(menuBar);
  this->addToolBar(toolBar);

  centralWidget = new QWidget();
  mainLayout = new QVBoxLayout();

  packetView = new QTableView();
  packetView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  packetView->setSelectionBehavior(QAbstractItemView::SelectRows);
  packetView->setSelectionMode(QAbstractItemView::SingleSelection);
  packetView->setEditTriggers(QAbstractItemView::NoEditTriggers);

  packetModel = new PacketModel();
  packetView->setModel(packetModel);
  mainLayout->addWidget(packetView);

  centralWidget->setLayout(mainLayout);
  this->setCentralWidget(centralWidget);
  this->setMinimumSize(MINIMUM_MAINWINDOW_WIDTH,MINIMUM_MAINWINDOW_HEIGHT);
  this->setWindowIcon(QIcon(":/Icons/ApplicationIcon.png"));
}

MainWindow::~MainWindow(){

}
