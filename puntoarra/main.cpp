#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point<int> p(1, 4);
    Point<int>  q(5, 5);
    Point<int>  r(4, 4);

    Point<int>  s(3,2);
    Point<int>  t(3,7);
    Point<int>  u(0,2);
    Point<int>  arr[] = {p, q , r};
    Point<int>  arr1[]={s,t,u};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size1 =sizeof(arr1)/sizeof(arr1[0]);
    PointArray<int>  pa2(arr, size);

    PointArray<int>  pa = pa2;
    cout << endl;
    cout << pa.getSize() << endl;
    pa.print();
    cout << endl;
    //pa.push_back(p);
    pa.print();
    cout << endl;
    pa.remove(0);
    cout << endl;
    pa.print();
    cout << endl;

    cout << endl;
    pa.clear();
    cout << endl;
    cout << pa.getSize() << endl;
    return 0;
}
