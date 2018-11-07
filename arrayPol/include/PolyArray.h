#ifndef POLYARRAY_H
#define POLYARRAY_H

#include "Polygon.h"
class PolyArray
{
    public:
        PolyArray();
        PolyArray(const Polygon pls[], const int size);
        PolyArray(PolyArray &o);
        ~PolyArray();

        void print();
        int getSize();
        void clear();
        void push_back(const Polygon &p);
        void insert(const int, const Polygon &p);
        void remove(const int);

    private:
        int size;
        Polygon *polygons;
        void resize(int);
};

#endif // POLYARRAY_H
