//
// Created by Nexif on 22/01/2021.
//

#ifndef LAB_9_ZADANIE105_H
#define LAB_9_ZADANIE105_H

#include "iostream"
#include "vector"
#include "string"
#include "sstream"
#include "future"
#include "thread"
#include "chrono"
#include "menu.h"

class Zadanie105 {
public:
    Zadanie105();

protected:

    static void Konwencja();

    static void PointiBoi();

    static void BlankiBoi();

    static void Konwencjonalnie();

    static void PointiDointi();

    static void PokaIndeksa();

private:
    static int GetIndex();
};


#endif //LAB_9_ZADANIE105_H
