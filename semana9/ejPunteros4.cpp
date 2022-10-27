#include <iostream>
#include "Point.h"

using namespace std;

void printarray(const Point array[],int tam){
    for(int i=0;i<tam;i++){
        array[i].print();
    }
}


void printarrayrec(const Point *array,int tam){
    if(tam<=0){
        return;
    }
    array->print();
    printarrayrec(++array,--tam);
}

int main(){
    Point p1;
    Point p2(12,5);
    Point p3(2,15);
    Point p4(10,8);
    Point p5(1,4);

    Point *arreglo = new Point[5];
    arreglo[0] = p1;
    arreglo[1] = p2;
    arreglo[2] = p3;
    arreglo[3] = p4;
    arreglo[4] = p5;
    cout<<"iterativo:"<<endl;
    printarray(arreglo, 5);
    cout<<endl;
    cout<<"recursivo:"<<endl;
    printarrayrec(arreglo, 5);
    return 0;
}