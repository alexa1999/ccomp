#include "point.h"
#include "iostream"



point::point(){
    x = 0.0; y = 0.0;
}
point::point(double nx, double ny){
    x = nx; y = ny;
}
point::point(point &o){
    x = o.x; y = o.y;
 }

void point::offset(double offsetX, double offsetY) {
 x += offsetX; y += offsetY;
}
void point::print() {
 std::cout << "(" << x << "," << y << ")";
}

double point::get_point_x(){
    return x;
}
double point::get_point_y(){
    return y;
}
