#include"InterfaceC.h"

InterfaceC::InterfaceC()
{
  // Initialization
  QGridLayout *layoutPage;    layoutPage    = new QGridLayout();          layoutPage->setAlignment(Qt::AlignCenter);

  layoutPage->addWidget(new QLabel("Interface C"));

  // Definition of the "Layout" of the "Widget"
  setLayout(layoutPage);
}
