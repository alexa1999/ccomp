#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point p(1, 4);
    Point q(5, 5);
    Point r(4, 4);
    Point arr[] = {p, q , r};
    int size = sizeof(arr)/sizeof(arr[0]);

    PointArray pa2(arr, size);

    PointArray pa = pa2;
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
