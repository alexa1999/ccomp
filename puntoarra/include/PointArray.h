#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"
#include<iostream>
using namespace std;
template <typename TP>class PointArray;
template <typename TP>
PointArray<TP> operator+(const Point<TP>&p,const Point<TP>&p1)
{
    PointArray<TP> result=p;
    for(int i=0;i<p.points.getSize();i++)
        result.points.push_back(p1.points[i]);

}
template <typename TP>
class PointArray
{
    friend PointArray<TP> operator+<>(const Point<TP>&p,const Point<TP>&p1);
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
ostream& operator << (ostream &o , const PointArray <TP>&s)
{
    for(unsigned x=0;x<s.points.size();x++)
    {
        o <<s.points[x]<<" ";
    }
    return o;
}

#endif // POINTARRAY_H
