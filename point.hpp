#ifndef __POINT__
#define __POINT__
#include <cmath>
#include <iostream>

struct Point{
    double x;
    double y;

    double distance(const Point& other) const{
        return sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }

    void input(){
        std::cin>>x;
        std::cin>>y;
    }
};

#endif