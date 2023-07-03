//
// Created by Solangel on 04/10/2022.
//

#ifndef PAIS_MONEDA_PERSONA_CURRENCY_H
#define PAIS_MONEDA_PERSONA_CURRENCY_H

#include "string"
#include <iostream>
using namespace std;

class Currency {
    string name;
    string symbol;
    string iso_code;
public:
    Currency();
    Currency(string, string, string);
    void set(string, string, string);
    void showInformation();
};


#endif //PAIS_MONEDA_PERSONA_CURRENCY_H
