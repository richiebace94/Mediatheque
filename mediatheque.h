#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <algorithm>
#include <iostream>
#include <fstream>
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
    void search(string chaine); //recherche une donnée dans la base de données
    void list();
    bool load(const char * filename); //charge un fichier
    bool save(const char * filename); // sauvegarde la base de données dans un fichier

    vector<Ressources *> media;
    vector<Ressources *> matches;
protected:
    //vector<Ressources *> media; // base de données de toute notre bibliothèque
    //vector<Ressources *> matches;
    bool m_utilisateur;

};

#endif // MEDIATHEQUE_H
