#include <algorithm>
#include <iostream>

#include <sstream>
#include <string>
#include <vector>

#include "ressources.h"


using namespace std;

Ressources::Ressources()
{
    id = cpt_id;    cpt_id++;
    date_parution = 0;
    date_emprunt = 0;
    date_retour = 0;
    auteur = "aucun";
    titre = "aucun";
    type = 0;
}

Ressources::Ressources(string _titre)
{
    id = cpt_id;    cpt_id++;
    titre = _titre;
    date_parution = 0;
    date_emprunt = 0;
    date_retour = 0;
    auteur = "aucun";
}

Ressources::~Ressources()
{
//cout<<"destruction objet"<<endl;
}

void Ressources::rm_media()
{

}

bool Ressources:: load_r(const char * filename) //charge un fichier
{

}

bool Ressources:: save_r(ofstream& myFile) // sauvegarde la base de données dans un fichier
{

    myFile << "Ressource n°   : " << r_id() << endl;
    myFile << "Titre          : " << r_titre() << endl;
    myFile << "Auteur         : " << r_auteur() << endl;
    myFile << "Type           : "<< typeMedia() << endl;
    myFile << "Date emprunt   : " << r_date_emprunt() << endl;
    myFile << "Date parution  : " << r_date_retour() << endl;
    myFile << "Date retour    : " << r_date_parution() << endl;

}

void Ressources::rendre_media()
{

}

void Ressources::emprunter_media()
{

}

void Ressources::add_media(int _type)
{
    switch (_type) {
    case livre:

        break;
    default:
        break;
    }
}

void Ressources::reserver_media()
{

}

void Ressources::show()
{
cout<<"Identifiant : "<<id<<endl;
}

void Ressources::showTitre()
{
cout<<"Ressource : "<<titre<<" ("<<typeMedia()<<")"<<", ID : "<<id<<endl;
}

void Ressources::showALL()
{
    g_id();
    g_titre();
    g_type();
    g_auteur();
    g_date_parution();
    g_date_emprunt();
    g_date_retour();
}

string Ressources::typeMedia()
{
    switch (type) {
    case livre:
        return "Livre";
        break;
    case Revue:
        return "Revue";
        break;
    case VHS:
        return "VHS";
        break;
    case CD:
        return "CD";
        break;
    case DVD:
        return "DVD";
        break;
    case Ressources_num:
        return "Ressources_num";
        break;
    default:
        return "Innconue";
        break;
    }
}

//////////////
/// getter ///
//////////////

// Affiche l'attribue
void Ressources::g_auteur()
{
cout<<"Auteur        : "<<auteur<<endl;
}

void Ressources::g_titre()
{
 cout<<"Titre         : "<<titre<<endl;
}

void Ressources::g_id()
{
    cout<<"ID            : "<<id<<endl;
}

void Ressources::g_type()
{
cout<<"Type          : "<<typeMedia()<<endl;
}

void Ressources::g_date_emprunt()
{
    cout<<"Date emprunt  : "<<date_emprunt<<endl;
}

void Ressources::g_date_parution()
{
    cout<<"Date parution : "<<date_parution<<endl;
}

void Ressources::g_date_retour()
{
    cout<<"Date retour   : "<<date_retour<<endl;
}


// Modifie l'attribue
void Ressources::g_auteur(string _auteur)
{
auteur = _auteur;
}

void Ressources::g_titre(string _titre)
{
titre = _titre;
}

void Ressources::g_id(int _id)
{
id = _id;
}

void Ressources::g_type(int _type)
{
type = _type;
}

void Ressources::g_date_emprunt(int _date_emprunt)
{
date_emprunt = _date_emprunt;
}

void Ressources::g_date_parution(int _date_parution)
{
date_parution = _date_parution;
}

void Ressources::g_date_retour(int _date_retour)
{
date_retour= _date_retour;
}


// Retourne l'attribue
string Ressources::r_auteur()
{
return auteur;
}

string Ressources::r_titre()
{
return titre;
}

int Ressources::r_id()
{
return id;
}

int Ressources::r_type()
{
return type;
}

int Ressources::r_date_emprunt()
{
return date_emprunt;
}

int Ressources::r_date_parution()
{
return date_parution;
}

int Ressources::r_date_retour()
{
return date_retour;
}
