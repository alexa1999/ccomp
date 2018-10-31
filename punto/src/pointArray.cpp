#include "pointArray.h"
#include "iostream"

pointArray::pointArray(){
    this->size=0;
    this->points=new point[size];
}
pointArray::pointArray(const point ptr[],const int size){
    this->size=size;
    this->points=new point[size];
    for(int y=0;y<size;y++)
        points[y]=ptr[y];
}
//

pointArray::pointArray(pointArray &o){
    std::cout<<"copy pointArray"<<std::endl;
    this->size=o.size;
    this->points=new point[o.size];
    for(int y=0;y<size;y++)
        this->points[y]=o.points[y];
}
void pointArray::resize(int newSize)
{
    point *pts =new point[newSize];
    int minsize=(newSize > size )? size :newSize;
    for(int i=0 ;i<minsize ; i++)
        pts[i]=points[i];
    delete[]points;
    size=newSize;
    points=pts;
}
void pointArray::print(){
    for(int y=0;y<size;y++)
        points[y].print();//es un punto y cpn flechita apunta  dir de memoria
}
void pointArray::push_back(const point &p)
{
    resize(size +1);
    points[size-1]=p;
}
void pointArray::insert (const int pos,const point &p)
{

    resize(size+1);

    for(int i=size-1;i<pos;i--){
        points[i]=points[i-1];
    }
    points[pos]=p;


}
void pointArray::remove (const int pos)
{
    {

    for(int i = pos; i < size-1; i++)
        points[i] = points[i+1];
    resize(size-1);

}


}
void pointArray::clear()
{
    resize(0);
}
int pointArray::get_size(){
    return size;
}
pointArray::~pointArray()
{
    delete[]points;
}

