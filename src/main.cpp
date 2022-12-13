/**
 * @ Author: LORD
 * @ Create Time: 2022-11-08 15:42:22
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-12-05 11:47:55
 * @ Description: main file for TP5
 */

#include <iostream>
#include "Garage.hpp"
#include "Voiture.hpp"

using namespace std;

int main()
{
    Garage *garage = new Garage;
    Voiture *voiture = new Voiture;


    voiture->setGarage(garage);
    voiture->sortirDuGarage();
    voiture->entrerDansGarage();
    delete (garage);
    delete (voiture);
    return (0);
}
