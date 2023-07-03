//
// Created by Solangel on 04/10/2022.
//

#include "Currency.h"

Currency::Currency() {}

Currency::Currency(string name, string symbol, string iso_code) {
    set(name, symbol, iso_code);
}

void Currency::set(string name, string symbol, string iso_code) {
    this -> name = name;
    this -> symbol = symbol;
    this -> iso_code = iso_code;
}

void Currency::showInformation() {
    cout << "Moneda: " << name << " (" << iso_code << ") " << symbol << endl;
}
