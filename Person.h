//
// Created by Leandro Guardia on 04/10/2022.
//

#ifndef PAIS_MONEDA_PERSONA_PERSON_H
#define PAIS_MONEDA_PERSONA_PERSON_H

#include "string"
#include <iostream>
using namespace std;

class Person {
    string firstName;
    string lastName;
public:
    Person(string, string);
    void showInfo();
    void setFirstname(string);
};


#endif //PAIS_MONEDA_PERSONA_PERSON_H
