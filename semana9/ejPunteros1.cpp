#include <iostream>
#include "Point.h"

using namespace std;

int main(){
    Point p1(1,2);

    Point *ptr = new Point(8,9);

    Point *ptr2;
    ptr2 = &p1;

    if(true){
        Point p2(5,6);
        p2.print();
    }
    
    p1.print();
    ptr2->print();

    ptr->print();

    delete ptr;
    return 0;
}