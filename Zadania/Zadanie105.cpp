//
// Created by Nexif on 22/01/2021.
//

#include "Zadanie105.h"

const int size = 5;
int v[ size ] = { 1, 2, 3, 4, 5 };
int *pv = &v[0];

int Zadanie105::GetIndex() {
    int Result{};
    try {
        std::cout << "# GetIndex(): Start\n";
        std::cout << "# GetIndex(): Podaj Index w Tablicy. Masz 5 sekund...\n";
        std::string input;
        std::getline(std::cin, input);
        std::stringstream ss;
        ss<<input;

        if (!(ss >> Result)) {
            Result = 0;
            throw std::exception("I think I don't work quiet well. :(");
        }

        for (char i : input) {
            if (!isdigit(i)) {
                throw std::exception("I'm not a diggitto. :(");
            }
        }

        std::cout << "# GetString(): End\n";

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        std::cout << "# GetString(): End\n";
        std::cout << "Bye :|" << std::endl;
        std::cout << std::endl << std::endl;
    }
    return Result;
}

void Zadanie105::PokaIndeksa() {
    std::clog << "The program stops when you don't input any value for at least 5 seconds." << std::endl;
    for(;;) {
    std::future<int> FutureIndex = std::async(std::launch::async, Zadanie105::GetIndex);
    std::chrono::system_clock::time_point TimeOut = std::chrono::system_clock::now() + std::chrono::seconds(10);
    std::future_status Status = FutureIndex.wait_until(TimeOut);
        if (Status == std::future_status::ready) {
            auto Result = FutureIndex.get();
//
//            std::cout << typeid(Result).name() << std::endl;
            if ( Result < 0 || Result > ( size - 1 )) {
                std::cerr << "Out of range. :(" << std::endl;
//                std::abort();
            } else {

                std::cout << "Podany index to: " << Result << "\n";
                std::cout << "Wartosc w tablicy to: " << *pv + Result << std::endl;
            }
        } else {
            std::cout << "TimeOut :) \n";
            std::exit(0);
        }
    }

}

void Zadanie105::BlankiBoi() {
    std::cerr << "I'm blank :)" << std::endl;
    exit(0);
}

void Zadanie105::Konwencjonalnie() {
    Zadanie105::Konwencja();
    exit(0);
}

void Zadanie105::PointiDointi() {
    Zadanie105::PointiBoi();
    exit(0);
}

void Zadanie105::Konwencja() {
    for (int i : v) {
        std::cout << "\n v[ i ]    = "  << i;
    }
}

void Zadanie105::PointiBoi() {
    for (int i = 0; i < *( &v + 1 ) - v; ++i) {
        std::cout << "\n *(pv + i) = " << *(pv + i)
                  << "\n pv[ i ]   = " << pv[i];
    }
}


Zadanie105::Zadanie105() {
    Menu magic("Wybierz opcje:");

    magic.addItem("Blank",(&Zadanie105::BlankiBoi));
    magic.addItem("Konwencjonalnie",(&Zadanie105::Konwencjonalnie));
    magic.addItem("Wskazniki",(&Zadanie105::PointiDointi));
    magic.addItem("Indeksacja",(&Zadanie105::PokaIndeksa));

    magic.printMenu();

}



