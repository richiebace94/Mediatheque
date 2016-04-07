#ifndef RESSOURCES_H
#define RESSOURCES_H
#include <iostream>


using namespace std;

///////////////////////////////
/// Association des classes ///
///////////////////////////////

#define livre           1
#define Revue           11
#define VHS             2
#define CD              21
#define DVD             22
#define Ressources_num  3


//////////////////////////////////////////
/// Déclaration de la classe Ressource ///
//////////////////////////////////////////

class Ressources
{
protected:
    int id;
    int date_parution;
    int date_emprunt;
    string titre;
    string auteur;
    int type;

public:
    Ressources();
    ~Ressources();
    virtual void rm_media();
    virtual void rendre_media();
    virtual void emprunter_media();
    virtual void add_media();
    virtual void reserver_media();
    virtual void show();
};

#endif // RESSOURCES_H
