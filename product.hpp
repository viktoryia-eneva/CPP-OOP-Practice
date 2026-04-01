#ifndef __PRODUCT__
#define __PRODUCT__
#include <iostream>

struct Product{
    char name[51];
    double quantity;
    char unit[10];

    void input(){
        std::cin.getline(name, 51);
        std::cin>>quantity;
        std::cin.getline(unit, 10);
    }
};

#endif