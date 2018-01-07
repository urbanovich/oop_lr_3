/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: setler
 *
 * Created on January 5, 2018, 10:39 PM
 */

#include <cstdlib>
#include <iostream>
#include "Node.h"
#include "List.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    List *l1 = new List;
    std::cout << "5 digits to list 1:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> *l1;
    }

    List *l2 = new List;
    std::cout << "5 digits to list 2:" << std::endl;
    for (int i = 5; i < 10; i++) {
        std::cin >> *l2;
    }

    std::cout << "list 1: ";
    std::cout << *l1 << std::endl;
    std::cout << "list 2: ";
    std::cout << *l2 << std::endl;

    List *l3 = *l1 + *l2;

    std::cout << "obtained list: ";
    std::cout << *l3 << std::endl;
    std::cout << "sorted: ";
    l3->sort();
    std::cout << *l3 << std::endl;

    delete l1;
    delete l2;
    delete l3;
    
    return 0;
}

