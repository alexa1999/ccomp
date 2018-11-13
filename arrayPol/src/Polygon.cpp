#include "Polygon.h"

Polygon::Polygon(){}
Polygon::Polygon(int a,int b):width(a),height(b){}

int Polygon::area(void){}



void Polygon::print(){
    cout<<this->area()<<endl;
}
