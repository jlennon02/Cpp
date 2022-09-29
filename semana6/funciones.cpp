//intercambio de valores de variables en funciones y demas
#include<iostream>
#include "Point.h"
using namespace std;

int suma(int a, int b){
    return a+b;
}
void imprimenum(int a){
    cout<<a<<endl;
}
void imprimirpoint(Point p){
    cout<<"("<<p.getX()<<", "<<p.getY()<<")"<<endl;
}
void modificarpoint(int _x,int _y,Point &p){
    p.setX(_x);
    p.setY(_y);
}
/*
implementa una funcion que reciba dos numeros e intercambie el valor de dichos numeros
*/
void intercambio(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
 /////////////

void interpoint(Point &a,Point &b){
    Point temp=a;
    a=b;
    b=temp;
}

int main(){
    int res=suma(4,1);//correcto
    cout<<res<<endl;
    imprimenum(6);//correcto

    Point p1(5,6);
    Point p2(6,7);
    imprimirpoint(p1);
    imprimirpoint(p2);
    modificarpoint(7,8,p1);

    int a=40;
    int b=20;
    intercambio(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    interpoint(p1,p2);
    imprimirpoint(p1);
    imprimirpoint(p2);
    return 0;
}