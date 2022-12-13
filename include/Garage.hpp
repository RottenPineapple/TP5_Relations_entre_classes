/**
 * @ Author: LORD
 * @ Create Time: 2022-11-08 15:43:24
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-12-05 12:02:09
 * @ Description: header file for the Garage class
 */

#ifndef GARAGE_H_
#define GARAGE_H_

#include "EtatGarage.hpp"

class Garage {
    private:
        EtatGarage etat;
    public:
        Garage();
        ~Garage();
        void ouvrir();
        void fermer();
        void afficherGarage();
        EtatGarage getEtat();
};

#endif  /* GARAGE_H_ */