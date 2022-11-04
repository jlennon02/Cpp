#include <iostream>
#include "IntArray.h"
#include "Point.h"
using namespace std;

int main() {
    Point point1(27,37);
    Point point2(25,39);
    Point point3(25,32);
    Point point4(39,30);
    Point point5(23,31);

    IntArray a(5);

    a.setAt(0, point1);
    a.setAt(1, point2);
    a.setAt(2, point3);
    a.setAt(3, point4);
    a.setAt(4, point5);

    a.print();
/*
    if(true) {
        IntArray b = a;
    }
*/  
    return 0;
}
