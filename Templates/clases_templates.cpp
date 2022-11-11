#include<iostream>
#include "Point.h"
using namespace std;

int main(){
    Point<float> pointfloat(2.5,3.5);
    Point<int> pointint(2,9);

    cout<< pointfloat.getx()<< ", "<<pointfloat.gety()<<endl;
    cout<< pointint.getx()<< ", "<<pointint.gety()<<endl;

    return 0;
}