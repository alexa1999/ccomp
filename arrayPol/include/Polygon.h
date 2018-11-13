#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

class Polygon
{

    public:
        //Constructor
        Polygon();
        Polygon(int,int);

        //Metodos
        int area(void);



//        void set_value(int a,int b)
//        {
//            width=a;
//            height=b;
//        };
        void print(void);
        //virtual int  area()=0;
//        void printarea()
//        {
//            cout <<this->area()<<endl;
//        }
    protected:
        int width,height;
};
#endif // POLYGON_H
