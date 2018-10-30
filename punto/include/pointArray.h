#ifndef POINTARRAY_H
#define POINTARRAY_H


#include "point.h"

class pointArray
{

public:
    pointArray();
    pointArray(const point ptr[],const int size);
    pointArray(pointArray &o);
    ~pointArray();

    void print();
    //insertar ,eliminar redimensionar
    int get_size();
    void clear();
    void push_back(const point &p);
    void insert (const int pos,const point &p);
    void remove (const int pos);
private:
    int size;
    point *points;
    void resize(int);

};
#endif // POINTARRAY_H
