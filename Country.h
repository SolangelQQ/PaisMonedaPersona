//
// Created by Leandro Guardia on 04/10/2022.
//

#ifndef PAIS_MONEDA_PERSONA_COUNTRY_H
#define PAIS_MONEDA_PERSONA_COUNTRY_H

#include "string"
#include "Currency.h"
#include "Person.h"
#include <iostream>
#include <vector>

using namespace std;

class Country {
private:
    string name;
    float surface = 11099000000;
    Currency currency;
    vector<Person*> population;
    void showDemographics();
public:
    Country(string, float);
    Country(string, string, string, string);
    void showInfo();
    void addCitizen(Person*);
};

#endif //PAIS_MONEDA_PERSONA_COUNTRY_H
