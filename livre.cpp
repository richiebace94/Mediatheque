#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

#include "livre.h"

Livre:: Livre()
{
    Ressources();
    g_type(livre);
    nb_page = 0;
    collection = "aucune";
    resume = "aucun";
}

Livre:: Livre(string _titre)
{
    Ressources();
    g_type(livre);
    g_titre(_titre);
    nb_page = 0;
    collection = "aucune";
    resume = "aucun";
}

Livre::~Livre()
{

}


bool Livre:: load_r(const char * filename) //charge un fichier
{

}

bool Livre:: save_r(ofstream& myFile) // sauvegarde la base de données dans un fichier
{
    Ressources::save_r(myFile);
    myFile << "Nombre de page : " << r_nb_page() << endl;
    myFile << "Collection     : " << r_collection() << endl;
    myFile << "Resume         : " << r_resume() << endl;
}

void Livre:: showALL()
{
    Ressources::showALL();
    g_collection();
    g_nb_page();
    g_resume();
}

void Livre::add_media(int _type)
{

}

//////////////
/// getter ///
//////////////

// Affiche l'attribue
void Livre::g_nb_page()
{
     cout<<"Nombre de page: "<<nb_page<<endl;
}

void Livre::g_collection()
{
     cout<<"Collection    : "<<collection<<endl;
}

void Livre::g_resume()
{
     cout<<"Resume        : "<<resume<<endl;
}

// Modifie l'attribue
void Livre:: g_nb_page(unsigned int _nb_page)
{
    nb_page = _nb_page;
}

void Livre:: g_collection(string _collection)
{
   collection = _collection;
}

void Livre:: g_resume(string _resume)
{
    resume = _resume;
}


// Retourne l'attribue
unsigned int Livre:: r_nb_page()
{
    return nb_page;
}

string Livre:: r_collection()
{
    return collection;
}

string Livre:: r_resume()
{
    return resume;
}
