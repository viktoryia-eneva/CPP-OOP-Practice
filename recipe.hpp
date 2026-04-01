#ifndef __RECIPE__
#define __RECIPE__
#include "product.hpp"

struct Recipe{
    char title[51];
    Product products[50];
    int productCount = 0;
    char instructions[1025];

    void input()
    {
        std::cin.getline(title, 51);
        std::cin>>productCount;

        for(int i=0; i< productCount; ++i)
        {
           products[i].input();
        }

        std::cin.getline(instructions, 1025);
    }

    void output() const
    {
        std::cout<< "Recipe: "<<title<<std::endl;
        for(int i=0; i<productCount; ++i)
        {
            std::cout<< products[i].name
            <<products[i].quantity
            <<products[i].unit<< std::endl;
        }
        std::cout<<"Instructions: "<< instructions <<std::endl;
    }
};

#endif