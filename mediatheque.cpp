#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

#include "mediatheque.h"
#include "ressources.h"


Mediatheque::Mediatheque()
{
    //constructeur
}


Mediatheque::~Mediatheque()
{
    //destructeurs
}

void Mediatheque::bye() const
{

}

void Mediatheque::clear()
{
  media.clear(); //efface la base de donnée courantes
}

void Mediatheque::list()
{
    for(unsigned int i = 0; i < media.size();i++)
    {
      media.at(i)->showALL();
    }
}

bool Mediatheque::load(const char * filename)
{

    return true;
}

bool Mediatheque::save(const char * filename) //sauvegarde la médiathèque
{
    int cmp = 0;
    ofstream myFile(filename);
    if (!myFile.is_open()){
        cout << "Impossible d'ouvrir en écriture le fichier: " << (*filename) << endl;
        return false;
    }
    for(unsigned int i = 0; i<media.size() ; i++)
    {
        media.at(i)->save_r(myFile);
        cmp++;
    }
    myFile.close();
    cout << "Mediathèque sauvegardée:"<< cmp << " fichiers sauvegardés"<< endl;
    return true;

}

void Mediatheque::search(string chaine)
{
    int cmp = 0;
    cout << "Recherche de: "<< chaine << endl;
    //Méthode plus conventionnel, on parcourt le vecteur
    if(matches.empty())
    {
        for(unsigned int i =0; i < media.size(); i++)
        {
            if (((media.at(i))->titre) == chaine)
            {
                cmp++;
                matches.push_back(media.at(i));
                cout << chaine << " was found" << endl;
            }
        }
    }
    else
    {
        vector<Ressources *> matches_tmp;
        for(unsigned int i =0; i < matches.size(); i++)
        {
            if (((matches.at(i))->titre) == chaine)
            {
                cmp++;
                matches_tmp.push_back(matches.at(i));
                cout << chaine << " was found" << endl;
                cout << "taille du vector matches_tmp: "<< matches_tmp.size()<< endl;
            }
        }

        matches.clear();
        copy(matches_tmp.begin(),matches_tmp.end(),matches.begin());
        matches_tmp.clear();
        cout << "Copie terminée, taille du vecteur matches: "<< matches.size()<< endl;

    }
    cout <<"They was: " << cmp << " result"<< endl;


    // Méthode avec itération C++ 11
   /*auto it = find_if(media.begin(), media.end(), [&chaine](const Ressources* media) {return (media->titre) == chaine;});
   if(it != media.end())
      {

          cmp++;
          auto index = distance(media.begin(), it);
          matches.push_back(media.at(index));
          cout << "Trouvé: "<< cmp<< " elements" << endl;
      }
   else
   {
       cout << "Pas trouvé"<< endl;
   }*/
}

bool Mediatheque::utilisateur()
{
    return m_utilisateur;
}

