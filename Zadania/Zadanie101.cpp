//
// Created by Nexif on 22/01/2021.
//

#include "Zadanie101.h"

void Zadanie101::AddressOfVariablePI() {
    pi = &i; //Adres zmiennej i.
    std::cout << "pi: " << pi << std::endl;
}

void Zadanie101::AddressOfVariablePF() {
    pf = &f; //Adres zmiennej f.
    std::cout << "pf: " << pf << std::endl;
}

void Zadanie101::ValueOfVariablePI() {
    xi = *pi; //Wskaźnik odwołujący się do pi (w której zapisany jest adres) zmiennej i => xi = i;
    std::cout << "xi: " << xi << std::endl;
}

void Zadanie101::ValueOfVariablePF() {
    xf = *pf; //Wskaźnik odwołujący się do pf (w której zapisany jest adres) zmiennej f => xf = f;
    std::cout << "xf: " << xf << std::endl;
}

Zadanie101::Zadanie101() {
    this -> AddressOfVariablePI();
    this -> AddressOfVariablePF();
    this -> ValueOfVariablePI();
    this -> ValueOfVariablePF();
}
