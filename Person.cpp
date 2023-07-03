//
// Created by Solangel on 04/10/2022.
//

#include "Person.h"

Person::Person(string firstName, string lastName) {
    this -> firstName = firstName;
    this -> lastName = lastName;
}

void Person::showInfo() {
     cout << firstName << " " << lastName << endl;
}

void Person::setFirstname(string firstName) {
    this -> firstName = firstName;
}