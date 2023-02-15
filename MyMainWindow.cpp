#include"MyMainWindow.h"

MyMainWindow::MyMainWindow()
{
  setWindowTitle("Stacked Widgets");
  setMinimumHeight(600);
  setMinimumWidth(600);

  m_actionQuit = new QAction("Quit",this);
  m_actionInterfaceA = new QAction("Interface A",this);
  m_actionInterfaceB = new QAction("Interface B",this);
  m_actionInterfaceC = new QAction("Interface C",this);

  m_menuFile = menuBar()->addMenu("File");
  m_menuFile->addAction(m_actionInterfaceA);
  m_menuFile->addAction(m_actionInterfaceB);
  m_menuFile->addAction(m_actionInterfaceC);
  m_menuFile->addAction(m_actionQuit);

  // Definition of Widget Central
  centralZone = new QWidget;

  // Definitions of the Different Widgets
  widgetHome        = new Home;               widgetHome->setObjectName("home");
  widgetInterfaceA  = new InterfaceA;         widgetInterfaceA->setObjectName("interfaceA");
  widgetInterfaceB  = new InterfaceB;         widgetInterfaceB->setObjectName("interfaceB");
  widgetInterfaceC  = new InterfaceC;         widgetInterfaceC->setObjectName("interfaceC");

  // Definition of Stacked Widget
  m_stackedWidget = new QStackedWidget(centralZone);
  m_stackedWidget->setMinimumHeight(minimumHeight());
  m_stackedWidget->setMinimumWidth(minimumWidth());
  m_stackedWidget->addWidget(widgetHome);
  m_stackedWidget->addWidget(widgetInterfaceA);
  m_stackedWidget->addWidget(widgetInterfaceB);
  m_stackedWidget->addWidget(widgetInterfaceC);

  // Creation Layout and Placement
  QVBoxLayout *layoutCentralZone = new QVBoxLayout;
  centralZone->setLayout(layoutCentralZone);
  setCentralWidget(centralZone);

  // Creation Connection Signal / Slot
  connect(m_actionQuit,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
  connect(m_actionInterfaceA,SIGNAL(triggered(bool)),this,SLOT(showInterfaceA()));
  connect(m_actionInterfaceB,SIGNAL(triggered(bool)),this,SLOT(showInterfaceB()));
  connect(m_actionInterfaceC,SIGNAL(triggered(bool)),this,SLOT(showInterfaceC()));
}



void MyMainWindow::showInterfaceA(){  m_stackedWidget->setCurrentIndex(m_stackedWidget->indexOf(widgetInterfaceA)); }

void MyMainWindow::showInterfaceB() { m_stackedWidget->setCurrentIndex(m_stackedWidget->indexOf(widgetInterfaceB)); }

void MyMainWindow::showInterfaceC() { m_stackedWidget->setCurrentIndex(m_stackedWidget->indexOf(widgetInterfaceC)); }
