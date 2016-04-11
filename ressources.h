#ifndef RESSOURCES_H
#define RESSOURCES_H
#include <iostream>
#include <fstream>


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

static int cpt_id = 0; //compteur de classe ,id total,

//////////////////////////////////////////
/// Déclaration de la classe Ressource ///
//////////////////////////////////////////

class Ressources
{
/*protected:
    int id;
    int date_parution;
    int date_emprunt;

    string auteur;
    int type;*/

public:
    string titre;
    int id;
    int date_parution;
    int date_emprunt;
    int date_retour;

    string auteur;
    int type;

    ///////////////////////////////////
    /// constructeurs & destructeurs///
    ///////////////////////////////////

        Ressources();
        Ressources(string _titre);
        Ressources(int _type,string _titre);
        virtual ~Ressources();
        virtual void rm_media();
        virtual void rendre_media();
        virtual void emprunter_media();
        virtual void add_media(int _type);
        virtual void reserver_media();
        virtual void show(); //affiche l'id
        virtual void showTitre();//affiche le titre, le type et l'id
        virtual void showALL(); //affiche les valeurs de tous les attribus
        virtual bool load_r(const char * filename); //charge un fichier
        virtual bool save_r(ofstream &myFile); // sauvegarde la base de données dans un fichier
        string typeMedia(); //renvoi le type du média

        //////////////
        /// getter ///
        //////////////

        // Affiche l'attribue
        virtual void g_auteur();
        virtual void g_titre();
        virtual void g_id();
        virtual void g_type();
        virtual void g_date_emprunt();
        virtual void g_date_retour();
        virtual void g_date_parution();

        // Modifie l'attribut
        virtual void g_auteur(string _auteur);
        virtual void g_titre(string _titre);
        virtual void g_id(int _id);
        virtual void g_type(int type);
        virtual void g_date_emprunt(int _date_emprunt);
        virtual void g_date_retour(int _date_retour);
        virtual void g_date_parution(int _date_parution);

        // Retourne l'attribut
        virtual string r_auteur();
        virtual string r_titre();
        virtual int r_id();
        virtual int r_type();
        virtual int r_date_emprunt();
        virtual int r_date_retour();
        virtual int r_date_parution();
};

#endif // RESSOURCES_H
