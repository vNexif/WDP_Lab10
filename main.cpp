//
// Created by Nexif on 22/01/2021.
//

#include <iostream>
#include "Menu/menu.h"
#include "Zadania/Zadanie101.h"
#include "Zadania/Zadanie102.h"
#include "Zadania/Zadanie103.h"
#include "Zadania/Zadanie104.h"
#include "Zadania/Zadanie105.h"

void globalCallback(int option) {
    std::cout << "Global Callback | Zadanie : " << option << std::endl;
}

void blankiBoi() {
    std::cerr << "I'm blank :)" << std::endl;
    exit(0);
}

void zadanie1() {
    std::cout << "Zadanie 1" << std::endl;
    Zadanie101();
}

void zadanie2() {
    std::cout << "Zadanie 2" << std::endl;
    Zadanie102();
}

void zadanie3() {
    std::cout << "Zadanie 3" << std::endl;
    Zadanie103();
}

void zadanie4() {
    std::cout << "Zadanie 4" << std::endl;
    Zadanie104();

}

void zadanie5(){
    std::cout << "Zadanie 5" << std::endl;
    Zadanie105();
}

int main(int argc, const char * argv[]) {


    // Menu with header and global callbacks
    Menu zadania("Select task:", &globalCallback);

    zadania.addItem("Blank", &blankiBoi);
    zadania.addItem("Zadanie 1", &zadanie1);
    zadania.addItem("Zadanie 2", &zadanie2); // You can have global callback and individual callbacks
    zadania.addItem("Zadanie 3", &zadanie3);
    zadania.addItem("Zadanie 4", &zadanie4);
    zadania.addItem("Zadanie 5", &zadanie5);

    zadania.printMenu();

    return 0;
}