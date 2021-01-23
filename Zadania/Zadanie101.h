//
// Created by Nexif on 22/01/2021.
//

#ifndef LAB_9_ZADANIE101_H
#define LAB_9_ZADANIE101_H

#include "iostream"


class Zadanie101 {
public:
    Zadanie101();

private:
    int i{10}, xi{}, *pi{};
    float f{20.5}, xf{}, *pf{};

    void AddressOfVariablePI();

    void AddressOfVariablePF();

    void ValueOfVariablePI();

    void ValueOfVariablePF();
};


#endif //LAB_9_ZADANIE101_H
