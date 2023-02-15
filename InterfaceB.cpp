#include"InterfaceB.h"

InterfaceB::InterfaceB()
{
  // Initialization
  QGridLayout *layoutPage;    layoutPage    = new QGridLayout();          layoutPage->setAlignment(Qt::AlignCenter);

  layoutPage->addWidget(new QLabel("Interface B"));

  // Definition of the "Layout" of the "Widget"
  setLayout(layoutPage);
}
