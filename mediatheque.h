#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "ressources.h"
#include "livre.h"
//#include "revue.h"
//#include "vhs.h"
//#include "ressource_num.h"
//#include "cd.h"
//#include "dvd.h"

using namespace std;

#define BIBLIOTECAIRE   true
#define CLIENT          false

class Mediatheque
{
public:
    Mediatheque();
    ~Mediatheque();

    bool utilisateur();
    void bye() const;
    void clear();
    void load(const char * filename); //charge un fichier
    void save(const char * filename); // sauvegarde la base de données dans un fichier
    void search(string chaine) const; //recherche une donnée dans la base de données
    void list();

protected:
    vector<Ressources *> media; // base de données de toute notre bibliothèque
    //vector<Ressources *> matches;
    bool m_utilisateur;

};

#endif // MEDIATHEQUE_H
