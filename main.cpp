#include <iostream>
#include "Country.h"
#include "Person.h"
//#include "Currency.h"

int main() {
    //    Currency monedaNarco("Bolivian Mvdol", "B$$$", "BOV");
    //    monedaNarco.showInfo();

    Person* p1 = new Person("Alicia", "Ada");
    Person p2("Bob", "ElConstructor");
    Person p3("Camilo", "Cabello");
    Person p4("Dany", "El Travieso");

    {
        Country bolivia("Bolivia", "Peso Boliviano", "B$", "BOB");
        bolivia.addCitizen(p1); // Paso de puntero
        bolivia.addCitizen(&p2); // Paso de dirección de objeto
        bolivia.addCitizen(&p3);
        bolivia.addCitizen(&p4);
        bolivia.showInfo();
    }
    cout << endl;
    p1 -> showInfo();

    delete p1;
    return 0;
}
