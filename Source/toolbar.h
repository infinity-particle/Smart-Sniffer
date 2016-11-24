#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QToolBar>
#include <QWidget>
#include <QAction>
#include <QIcon>

class ToolBar: public QToolBar{
    Q_OBJECT

  public:
    ToolBar(QWidget* parent = nullptr);
    ~ToolBar();

  public slots:
    void start();
    void stop();
    void settings();
    void filter();

  private:
    QAction* startAction;
    QAction* stopAction;
    QAction* settingsAction;
    QAction* filterAction;
    QIcon* startIcon;
    QIcon* stopIcon;
    QIcon* settingsIcon;
    QIcon* filterIcon;
};

#endif // TOOLBAR_H
