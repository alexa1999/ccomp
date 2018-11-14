#include <iostream>
#include "Point.h"
template <typename T>
Point<T>::Point(T xh, T yh){
    x = xh;
    y = yh;
}
template <typename T>
Point<T>::Point(){
    x = 0;
    y = 0;
}
template <typename T>
Point<T>::Point(Point &o){
    x = o.x;
    y = o.y;
}
template <typename T>
void Point<T>::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}
template <typename T>
void Point<T>::offset(T nx, T ny){
    x += nx;
    y += ny;
}
template <typename T>
T Point::getX(){
    return x;
}
template <typename T>
T Point::getY(){
    return y;
}
template <typename T>
void Point<T>::setX(T x){
    this->x = x;
}
template <typename T>
void Point<T>::setY(T y){
    this->y = y;
}

