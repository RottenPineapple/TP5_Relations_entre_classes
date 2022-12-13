/**
 * @ Author: LORD
 * @ Create Time: 2022-11-15 17:38:17
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-12-05 11:40:35
 * @ Description: source file for Voiture Class
 */

#include "Voiture.hpp"
#include <iostream>

Voiture::Voiture() {
    this->etat = ARRETEE;
    std::cout << "Construction de la voiture." << std::endl;
}

Voiture::Voiture(Garage *unGarage) {
    this->etat = ARRETEE;
    std::cout << "Construction de la voiture." << std::endl;
    this->leGarage = unGarage;
}

void Voiture::demarrer() {
    this->etat = DEMAREE;
    std::cout << "La voiture démarre." << std::endl;
}

void Voiture::avancer() {
    this->etat = ROULANTE;
    std::cout << "La voiture avance." << std::endl;
}

void Voiture::reculer() {
    this->etat = ROULANTE;
    std::cout << "La voiture recule." << std::endl;
}

void Voiture::arreter() {
    this->etat = ARRETEE;
    std::cout << "La voiture s'arrête." << std::endl;
}

void Voiture::entrerDansGarage() {
    this->leGarage->ouvrir();
    if (this->leGarage->getEtat() == OUVERT)
        this->avancer();
    this->arreter();
    this->leGarage->fermer();
}

void Voiture::sortirDuGarage() {
    this->leGarage->ouvrir();
    this->demarrer();
    if (this->leGarage->getEtat() == OUVERT)
        this->reculer();
    this->arreter();
    this->leGarage->fermer();
}

void Voiture::setGarage(Garage *unGarage) {
    this->leGarage = unGarage;
}

Garage *Voiture::getGarage() {
    return (this->leGarage);
}

Voiture::~Voiture() {
    std::cout << "Destruction de la voiture" << std::endl;
}