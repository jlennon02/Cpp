#include<iostream>
using namespace std;

int main(){
    int y = 20;

    int *yptr;
    yptr = &y;
    cout<<"puntero de y: "<<yptr<<endl;
    cout<<"primer valor de y: "<<*yptr<<endl;
    *yptr=500;
    cout<<"valor nuevo de y: "<<*yptr<<endl;


    int x=100;
    yptr = &x;
    cout<<"puntero de x: "<<yptr<<endl;
    cout<<"primer valor de x: "<<*yptr<<endl;
    *yptr=100000;
    cout<<"valor nuevo de x: "<<*yptr<<endl;

    return 0;
}