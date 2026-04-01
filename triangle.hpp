#ifndef __TRIANGLE__
#define __TRIANGLE__
#include <iostream>
#include "point.hpp"
#include <cmath>

struct Triangle{
   Point a, b, c;

   double area() const{
     double sideA = b.distance(c);
     double sideB = a.distance(c);
     double sideC = a.distance(b);
     
     double p = (sideA + sideB + sideC) / 2;

     return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
   }

   void input()
   {
      a.input();
      b.input();
      c.input();
   }
   
};

#endif