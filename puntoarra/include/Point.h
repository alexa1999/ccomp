#ifndef POINT_H
#define POINT_H
template <typename T>
class Point
{
    private:
        T x, y;

    public:
        Point();
        Point(T, T);
        Point(Point &o);

        void offset(T, T);
        void print();
        T getX();
        T getY();
        void setX(T x);
        void setY(T y);


};

#endif // POINT_H
