#include"Home.h"

Home::Home()
{
  // Initialization
  QGridLayout *layoutPage;    layoutPage    = new QGridLayout();          layoutPage->setAlignment(Qt::AlignCenter);

  layoutPage->addWidget(new QLabel("Accueil"));

  // Definition of the "Layout" of the "Widget"
  setLayout(layoutPage);
}
