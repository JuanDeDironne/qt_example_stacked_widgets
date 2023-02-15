#include"InterfaceA.h"

InterfaceA::InterfaceA()
{
  // Initialization
  QGridLayout *layoutPage;    layoutPage    = new QGridLayout();          layoutPage->setAlignment(Qt::AlignCenter);

  layoutPage->addWidget(new QLabel("Interface A"));

  // Definition of the "Layout" of the "Widget"
  setLayout(layoutPage);
}
