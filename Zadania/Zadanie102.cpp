//
// Created by Nexif on 22/01/2021.
//

#include "Zadanie102.h"

Zadanie102::Zadanie102() {
    int i = 95;
    int  *pi,**ppi;                                         //Adresy i, pi, oraz ppi
    pi = &i;                                                //Zmienna pi z adresem i jako wartość
    ppi = &pi;                                              //Zmienna ppi z adresem pi jako wartość

    // pi = &[i] -> Adres zmiennej i.
    // *[pi] -> Wartość i jako odłowanie (*) się do adresu zawartego w zmiennej pi, który jest adresem zmiennej i.
    // W skrócie : Adres(&)[i] -> pi. Adres(&)[pi] -> ppi. (Wartość)*(Wartość)*[ppi] -> Zawartość [i] = 95.

    // Jest to równoznaczne z :
    // Adres zmiennej i = 0075F648
    // Adres zmiennej pi = 0075F63C
    // Adres zmiennej ppi = 0075F630
    // **ppi => Wartości w -> 0075F630, która jest równa 0075F63C i kolejnej wartości (w tym przypadku zmiennej pi),
    // która jest równa adresowi zmiennej i (0075F648), a pod tym adresem trzymana jest wartość zmiennej i (95),
    // którą otrzymujemy lub 0075F630 -> 0075F63C -> 0075F648 (95)

    std::cout << "\n Adres i   " << &i << "\t"  << pi;
    std::cout << "\n Adres pi  " << &pi << "\t" << ppi;
    std::cout << "\n Adres ppi " << &ppi;					//Wartosc i
    std::cout << "\n Wartosc i " << i << "\t" << *pi << "\t" << **ppi;

}
