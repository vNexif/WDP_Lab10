//
// Created by Nexif on 22/01/2021.
//

#include "Zadanie104.h"

Zadanie104::Zadanie104() {
    int v[ 5 ] = { 1, 2, 3, 4, 5 };
    int *pv = &v[0];
    for (int i = 0; i < *(&v + 1) - v; ++i) {
        std::cout << "\n v[ i ]    = " << v[i]
                  << "\n *(pv + i) = " << *(pv + i)
                  << "\n pv[ i ]   = " << pv[i]
                  << "\n";
    }
}
