/**
 * @ Author: LORD
 * @ Create Time: 2022-12-05 11:48:49
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-12-13 17:21:26
 * @ Description:
 */

#ifndef MOTEUR_H_
#define MOTEUR_H_

#include "EtatVoiture.hpp"
#include "Voiture.hpp"
#include "TypeMoteur.hpp"
#include "EtatMoteur.hpp"

class Moteur {
    private:
        TypeMoteur type;
        EtatMoteur etat;
    public:
        Moteur();
        Moteur(TypeMoteur valType);
        void arreter();
        void demarrer();
        void reparer();
        EtatMoteur tester();    
        void tomberEnPanne();
};

#endif /* MOTEUR_H_ */