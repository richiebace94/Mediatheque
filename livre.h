#ifndef LIVRE_H
#define LIVRE_H
#include "ressources.h"

class Livre : public Ressources
{

protected:

    unsigned int nb_page;
    string collection;
    string resume;

public:
    Livre();
    Livre(string _titre);
    ~Livre();

    virtual void add_media(int _type);
    virtual void showALL();
    virtual bool load_r(const char * filename); //charge un fichier
    virtual bool save_r(ofstream& myFile); // sauvegarde la base de données dans un fichier

    //////////////
    /// getter ///
    //////////////

    // Affiche l'attribue
    virtual void g_nb_page();
    virtual void g_collection();
    virtual void g_resume();

    // Modifie l'attribue
    virtual void g_nb_page(unsigned int _nb_page);
    virtual void g_collection(string _collecion);
    virtual void g_resume(string _resume);

    // Retourne l'attribue
    virtual unsigned int r_nb_page();
    virtual string r_collection();
    virtual string r_resume();
};

#endif // LIVRE_H
