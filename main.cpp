#include <QCoreApplication>

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "mediatheque.h"

using namespace std;

int main(int argc, char*argv[])
{
   cout << "Coucou" << endl;

   Mediatheque* M1 = new Mediatheque();
   Ressources* P1 = new Ressources("Lord of the rings");
   M1 -> media.push_back(P1);

   Ressources* P2 = new Ressources("1984");
   M1 -> media.push_back(P2);

   M1 ->search("Lord");


   delete P1;
   delete P2;
   delete M1;
   return 0;
}
