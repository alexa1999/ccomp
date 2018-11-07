#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

class Polygon
{
    public:
        Polygon(){
            width=0;
            height=0;

        }
        Polygon (int a,int b):width(a),height(b){}
//        void set_value(int a,int b)
//        {
//            width=a;
//            height=b;
//        };
        void print();
        //virtual int  area()=0;
//        void printarea()
//        {
//            cout <<this->area()<<endl;
//        }
        void setW(int);
        void setH(int);
    protected:
        int width,height;
};
#endif // POLYGON_H
