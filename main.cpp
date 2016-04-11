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

   /*Mediatheque* M1 = new Mediatheque();
   Ressources* P1 = new Ressources("Lord of the rings");
   M1 -> media.push_back(P1);

   Ressources* P2 = new Ressources("1984");
   M1 -> media.push_back(P2);

   Ressources* P3 = new Ressources("Lord of the rings");
   M1 -> media.push_back(P3);

   M1 ->search("Lord of the rings");

   Ressources* P4 = new Ressources("Return of the kings");
   M1 -> media.push_back(P4);
   cout << "Taille du vecteur media: "<< M1-> media.size()<< endl;
   cout << "Taille du vecteur matches: "<< M1-> matches.size()<< endl;

   M1 ->search("Lord of the rings");
   cout << "Taille du vecteur media: "<< M1-> media.size()<< endl;
   cout << "Taille du vecteur matches: "<< M1-> matches.size()<< endl;

   M1 ->search("Return of the kings");
   cout << "Taille du vecteur media: "<< M1-> media.size()<< endl;
   cout << "Taille du vecteur matches: "<< M1-> matches.size()<< endl;


   //M1->clear();


   delete P1;
   delete P2;
   delete P3;
   delete P4;
   delete M1;*/

   Mediatheque* M1 = new Mediatheque();
   /*Ressources *A =new Ressources();
   M1 -> media.push_back(A);
   Ressources *B =new Ressources("Lord of the rings");
   M1 -> media.push_back(B);*/
   Livre *C =new Livre("Ma vie");
   M1 -> media.push_back(C);
   //B->showALL();
   //cout<<endl;

   C->g_auteur("Baptiste Martin");
   C->g_nb_page(12);
   C->g_resume("Je l'ai pas lu...");
   C->g_collection("15-18");
   C->showALL();
   cout<<endl;

   M1->save("Sauvegarde.txt");

   //delete A;
   //delete B;
   delete C;
   delete M1;

   return 0;
}
