//
// Created by Leandro Guardia on 04/10/2022.
//

#include "Country.h"

Country::Country(std::string name, float surface) {
    this -> name = name;
    this -> surface = surface;
}

Country::Country(string name, string currencyName, string currencySymbol, string currencyCode) {
    this -> name = name;
    currency.set(currencyName, currencySymbol, currencyCode);
}

void Country::showInfo() {
    cout << "Name: " << name << endl;
    cout << "Surface: " << surface << " kmˆ2" << endl;
    currency.showInfo();
    showDemographics();
}

void Country::showDemographics() {
    cout << "Population: " << population.size() << endl;
    for (int i = 0; i < population.size(); ++i) {
        cout << i+1 << ": ";
        population[i] -> showInfo();
    }
}

void Country::addCitizen(Person* person) {
    // Si paso un objeto por valor el contexto externo no
    // no refleja los cambios realizados internamente
    //    person -> setFirstname("Cualquier otro nombre");
    population.push_back(person);
}
