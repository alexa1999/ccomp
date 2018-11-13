#include "PolyArray.h"

PolyArray::PolyArray()
{
    this->size = 0;
    this->polygons = new Polygon[size];
}

PolyArray::PolyArray(const Polygon *pls, const int size) {
    this->size = size;
    this->polygons = new Polygon[size];
    for(int i = 0; i < size; i++)
        polygons[i] = pls[i];
}

PolyArray::PolyArray(PolyArray &o){
    this->size = o.size;
    this->polygons = new Polygon[size];
    for(int i = 0; i < size; i++)
        polygons[i] = o.polygons[i];
}

void PolyArray::resize(int newSize) {
	Polygon *pls = new Polygon[newSize];
	int minsize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minsize; i++)
        pls[i] = polygons[i];
	delete[] polygons;
	size = newSize;
	polygons = pls;
}

void PolyArray::print() {
	for(int i = 0; i < size; i++)
		polygons[i].print();
}

void PolyArray::push_back(const Polygon &p){
	resize(size+1);
	polygons[size-1] = p;
}

void PolyArray::insert(const int pos, const Polygon &p) {
	resize(size+1);
    for(int i = size-1; i < pos; i--)
        polygons[i] = polygons[i-1];
	polygons[pos] = p;
}

void PolyArray::remove(const int pos) {
    for(int i = pos; i < size-1; i++)
        polygons[i] = polygons[i+1];
    resize(size-1);

}

void PolyArray::clear() {
	resize(0);
}

int PolyArray::getSize(){
    return size;
}

PolyArray::~PolyArray()
{
    delete[] polygons;
}
