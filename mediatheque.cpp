#include <algorithm>
#include <iostream>
#include <sstream>
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
    for(int i = 0; media.size();i++)
    {
      media.at(i)->show();
    }
}

void Mediatheque::load(const char * filename)
{

}

void Mediatheque::save(const char * filename)
{

}

void Mediatheque::search(string chaine)
{
   auto it = find_if(media.begin(), media.end(), [&chaine](const Ressources* media) {return (media->titre) == chaine;});
   if(it != media.end())
      {
          auto index = distance(media.begin(), it);
          matches.push_back(media.at(index));
          cout << "Trouvé"<<endl;
      }
   else
   {
       cout << "Pas trouvé"<< endl;
   }

}

bool Mediatheque::utilisateur()
{
    return m_utilisateur;
}

