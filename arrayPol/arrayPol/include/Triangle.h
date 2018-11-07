#ifndef TRIANGLE_H
#define TRIANGLE_H


using namespace std;

#include "Polygon.h"
class Triangle:public Polygon
{
    public:
        Triangle(int a,int b):Polygon(a,b){}
        int area();

};

#endif // TRIANGLE_H
