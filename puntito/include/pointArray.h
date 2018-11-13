#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "point.h"
template <typename TP>
class pointArray
{

public:
    pointArray();
    pointArray(const point<TP> ptr[],const int size);
    pointArray(pointArray &o);
    ~pointArray();

    void print();
    //insertar ,eliminar redimensionar
    int get_size();
    void clear();
    void push_back(const point<TP> &p);
    void insert (const int pos,const point<TP> &p);
    void remove (const int pos);
private:
    int size;
    point <TP>*points;
    void resize(int);

};

#endif // POINTARRAY_H
