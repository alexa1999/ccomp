#ifndef POINT_H
#define POINT_H
template <typename T>

class point
{
    private:
    T x, y;
    public:
    point();//
    point(T,T);//
    point(point &o);//
    void offset(T,T);
    void print();



    T get_point_x();
    T get_point_y();

};
#endif // POINT_H
