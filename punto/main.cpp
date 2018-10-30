#include <iostream>
#include "point.h"
#include "pointArray.h"
using namespace std;
//metodo que se crae cuando se crea una instacncnias
//void swap(point &x,point &y);
//void swap(point *x,point *y);


int main()
{
    //point p;
    /*
    point p(40,50);
    point q(10,20);
    p.print();
    q.print();
    swap(&p,&q);
    p.print();
    q.print();
    */

    /* //ejemplo 2 de new uso
    point *easy = new point;
    easy->offset(10,10);
    easy->print();
    */

    //point *ptr=&p;


    point a(1,2);
    point b(10,20);
    point c(10,20);
    point arr[]={a,b,c};
    //int size=3;
    int size =sizeof(arr)/sizeof(arr[0]);
    pointArray p2(arr,size);

    //p2.print();
    pointArray pa2(arr,size);
    cout<<endl;cout<<endl;
    pointArray pa = p2;

    //p2=p; no seraia constructor copia
    //
    //p.print();
    cout<< pa.get_size()<<endl;
    pa.push_back(a);
    pa.print();
    pa.insert(1,b);
    pa.print();
    pa.clear();
    cout<<pa.get_size()<<endl;
}
