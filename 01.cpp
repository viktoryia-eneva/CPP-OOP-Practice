#include <iostream>
#include "triangle.hpp"

int main()
{
    int N;
    std::cin>>N;

    double areas[100];
    int count = 1;

    for(int i = 0; i<N; ++i)
    {
        Triangle temp;
        std::cin>> temp.a.x>> temp.a.y >> temp.b.x >>temp.b.y>> temp.c.x>>temp.c.y;

        areas[i] = temp.area();
    }

    for(int i=0; i<N; ++i)
    {
        for(int j= i+1; j<N; ++j)
        {
          if(areas[i] == areas[j])
          {
            ++count;
          }
        }
    }

    std::cout<< count<< std::endl;

    return 0;
}