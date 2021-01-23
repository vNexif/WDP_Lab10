//
// Created by Nexif on 22/01/2021.
//

#include "Zadanie103.h"

Zadanie103::Zadanie103() {

    float    ar[ 3 ] [ 4 ] = {
            { 1.1, 1.2, 1.3, 1.4 },
            { 2.1, 2.2  },
            { 3.1,3.2,3.3  }
    };
    std::cout << "\n  Adres    ar[0][0] " << ar    << "\t" <<  &ar[0][0];
    std::cout << "\n  Wartosc  ar[0][0] " << **ar  << "\t" <<  ar[0][0];

    std::cout << "\n  Addres   ar[2][0] " << *( ar + 2 ) << "\t" << &ar[2][0];
    std::cout << "\n  Wartosc  ar[2][0] " << **(ar + 2)  << "\t"  << ar[2][0];

    std::cout << "\n  Adres    ar[2][2] " << *(ar + 2)+2    << "\t" << &ar[2][2];
    std::cout << "\n  Wartosc  ar[2][2] " << *(*(ar + 2) + 2) << "\t" << ar[2][2];


}
