#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"
#include<iostream>
using namespace std;
template <typename TP>class PointArray;
template <typename TP>
PointArray<TP> operator+(const PointArray<TP>&p,const PointArray<TP>&p1)
{
    PointArray<TP> result=p;
    for(int i=0;i<p.size;i++)
        result.push_back(p1.points[i]);

    return result;
}
//template <typename TP>class PointArray;
//template <typename TP>
//PointArray <TP> operator=(const Point<TP> &other)
//{
//    if(this!=&other)
//    {
//        if(other.size!=size)
//        {
//            delete[]points;
//            size=0;
//            points=nullptr;
//            points=new int[other.size];
//            size=other.size;
//
//        }
//        copy(other.points,other.points +other.size,points);
//    }
//    return *this;
//}
template <typename TP>
class PointArray
{
    friend PointArray<TP> operator+<>(const PointArray<TP>&p,const PointArray<TP>&p1);
//    friend PointArray <TP> operator=<>(const Point<TP> &other);
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
    //lo que imprima de los elementos guardarlos en un archivo
    private:
        int size;
        Point<TP>*points;
        void resize(int);
};
template <typename TP>
ostream& operator << (ostream &o , const PointArray <TP>&s)
{
    for(unsigned x=0;x<s.points.size();x++)
    {
        o <<s.points[x]<<" ";
    }
    return o;
}
template <typename TP>
PointArray<TP>::PointArray()
{
    this->size = 0;
    this->points = new Point<TP> [size];
}
template <typename TP>
PointArray<TP>::PointArray(const Point<TP>pts[], const int size) {
    this->size = size;
    this->points = new Point<TP> [size];
    for(int i = 0; i < size; i++)
        points[i] = pts[i];
}
template <typename TP>
PointArray<TP>::PointArray(PointArray &o){
    this->size = o.size;
    this->points = new Point<TP>[size];
    for(int i = 0; i < size; i++)
        points[i] = o.points[i];
}
template <typename TP>
void PointArray<TP>::resize(int newSize) {
	Point<TP>*pts = new Point<TP>[newSize];
	int minsize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minsize; i++)
        pts[i] = points[i];
	delete[] points;
	size = newSize;
	points = pts;
}
template <typename TP>
void PointArray<TP>::print() {
	for(int i = 0; i < size; i++)
		points[i].print();
}

template <typename TP>
void PointArray<TP>::push_back(const Point<TP>&p){
	resize(size+1);
	points[size-1] = p;
}
template <typename TP>
void PointArray<TP>::insert(const int pos, const Point<TP>&p) {
	resize(size+1);
	cout<<"d"<<endl;
	cout<<size;
    for(int i = size-1; i < pos; i--)
        points[i] = points[i-1];
    points[pos] = p;
}
template <typename TP>
void PointArray<TP>::remove(const int pos) {

    for(int i = pos; i < size-1; i++)
        points[i] = points[i+1];
    resize(size-1);

}
template <typename TP>
void PointArray<TP>::clear() {
	resize(0);
}
template <typename TP>
int PointArray<TP>::getSize(){
    return size;
}
template <typename TP>
PointArray<TP>::~PointArray()
{
    delete[] points;
}
#endif // POINTARRAY_H
