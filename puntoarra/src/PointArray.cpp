#include "PointArray.h"
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

