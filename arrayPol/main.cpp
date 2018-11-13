#include <iostream>
#include "Polygon.h"
#include "PolyArray.h"
using namespace std;
#include "Rectangle.h"
#include "Triangle.h"
int main()
{

    Rectangle r1(2,3);
    Polygon *p=&r1;

    Rectangle r2(4,5);
    Polygon *p=&r1;
    Rectangle r3(2,3);
    Polygon *p=&r1;

    Triangle t1(2,3);
    Polygon *pt=&t1;




//    PolyArray arr[]={p,pt};
//    int size =sizeof(arr)/sizeof(arr[0]);
//    PolyArray p1(arr,size);


    Rectangle arr[]={a,b};
    int size =sizeof(arr)/sizeof(arr[0]);
    PolyArray pa(arr,size);
    pa.push_back(r3);
    pa.print()

    //Polygon *p1=&p;

}
