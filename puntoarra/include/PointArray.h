#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"
#include<iostream>
using namespace std;
template <typename TP>

class PointArray
{
    public:
        PointArray();
        PointArray(const Point<TP>pts[], const int size);
        PointArray(PointArray &o);
        ~PointArray();

        void print();
        int getSize();
	void clear();
	void push_back(const Point<TP>&p);
	void insert(const int, const Point<TP>&p);
	void remove(const int pos);

    private:
        int size;
        Point<TP>*points;
        void resize(int);
};

#endif // POINTARRAY_H
