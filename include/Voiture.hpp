/**
 * @ Author: LORD
 * @ Create Time: 2022-11-15 17:38:04
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-12-05 12:02:18
 * @ Description:
 */

#ifndef VOITURE_H_
#define VOITURE_H_

#include "EtatVoiture.hpp"
#include "Garage.hpp"

class Voiture {
    private:
        EtatVoiture etat;
        Garage *leGarage;
    public:
        Voiture();
        Voiture(Garage *unGarage);
        ~Voiture();
        void arreter();
        void demarrer();
        void avancer();
        void s_arreter();
        void sortirDuGarage();
        void entrerDansGarage();
        void reculer();
        void setGarage(Garage *unGarage);
        Garage *getGarage();
};

#endif /* VOITURE_H_ */