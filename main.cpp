#include<QApplication>
#include"MyMainWindow.h"

int main(int nbArg, char* listeArg[])
{
  QApplication myApp(nbArg,listeArg);

  MyMainWindow myWindow;
  myWindow.show();

  myApp.exec();
}
