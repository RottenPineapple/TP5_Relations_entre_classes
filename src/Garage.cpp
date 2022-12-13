/**
 * @ Author: LORD
 * @ Create Time: 2022-11-08 15:43:24
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-12-05 09:29:12
 * @ Description: source file for the Garage class
 */

#include "Garage.hpp"
#include <iostream>

Garage::Garage() {
    this->etat = FERME;
    std::cout << "Construction du garage." << std::endl;
}

Garage::~Garage() {
    std::cout << "Destruction du garage." << std::endl;
}

void Garage::ouvrir() {
    std::cout << "Ouverture du garage." << std::endl;
    this->etat = OUVERT;
}

void Garage::fermer() {
    std::cout << "Fermeture du garage." << std::endl;
    this->etat = FERME;
}

void Garage::afficherGarage() {
    switch (this->etat) {
        case OUVERT:
            std::cout << "OUVERT" << std::endl;
            break;
        case FERME:
            std::cout << "FERME" << std::endl;
            break;
        default:
            break;
    }
}

EtatGarage Garage::getEtat() {
   return (this->etat);
}