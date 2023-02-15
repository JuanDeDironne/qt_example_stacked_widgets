#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include<QtWidgets>
#include"Home.h"
#include"InterfaceA.h"
#include"InterfaceB.h"
#include"InterfaceC.h"

class MyMainWindow : public QMainWindow
{
  Q_OBJECT

  public:
  MyMainWindow();
  QString m_stringTest = "ABCDEF";

  public slots:
  void showInterfaceA();
  void showInterfaceB();
  void showInterfaceC();

  private:
  QMenu *m_menuFile;
  QAction *m_actionInterfaceA;
  QAction *m_actionInterfaceB;
  QAction *m_actionInterfaceC;
  QAction *m_actionQuit;

  QWidget *centralZone;

  QStackedWidget *m_stackedWidget;
  Home *widgetHome;
  InterfaceA *widgetInterfaceA;
  InterfaceB *widgetInterfaceB;
  InterfaceC *widgetInterfaceC;
};

#endif // MYMAINWINDOW_H
