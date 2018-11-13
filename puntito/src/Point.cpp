#include "Point.h"

#include "iostream"
template <typename T>
point<T>::point(){
    x = 0.0; y = 0.0;
}
template <typename T>
point<T>::point(T nx, T ny){
    x = nx; y = ny;
}
template <typename T>
point<T>::point(point &o){
    x = o.x; y = o.y;
 }
template <typename T>
void point<T>::offset(T offsetX, T offsetY) {
 x += offsetX; y += offsetY;
}
template <typename T>
void point<T>::print() {
 std::cout << "(" << x << "," << y << ")";
}
template <typename T>
T point::get_point_x(){
    return x;
}
template <typename T>
T point::get_point_y(){
    return y;
}
