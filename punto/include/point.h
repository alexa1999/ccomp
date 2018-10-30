#ifndef POINT_H
#define POINT_H


class point
{
    private:
    double x, y;
    public:
    point();//
    point(double nx, double ny);//
    point(point &o);//
    void offset(double offsetX, double offsetY);
    void print();



    double get_point_x();
    double get_point_y();

};

#endif // POINT_H
