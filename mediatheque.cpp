#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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

void Mediatheque::clear() const
{
 //   matches.clear(); //efface la base de donnée courantes
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

void Mediatheque::search(string chaine) const
{
    /*int i = 0;
    while(i != media.size())
    {
        it = find(media.begin,media.end(), chaine);
        if (it != media.end())
        {
            matches.push_back(media.at(i));
        }
        i++;
    }*/
}

bool Mediatheque::utilisateur()
{
    return m_utilisateur;
}
