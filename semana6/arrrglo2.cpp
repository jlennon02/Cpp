#include <iostream>
#include "Point.h"
using namespace std;
void imprimirpoints(const Point arr[],int tam){
    for(int i=0;i<tam;i++){
        arr[i].print();
    }
}
void intercambio(Point &a,Point &b){
    Point temp=a;
    a=b;
    b=temp;
}

void burbuja(Point arr[],int tam){
    Point temp;
    for(int i=0;i<tam;i++){
        for(int j=j+1;j<tam;j++){
            if(arr[i].getX()>arr[j].getX()){
                intercambio(arr[i],arr[j]);
            }
        }
    }
}

void insercion(const Point arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j].setX()>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main(){
    Point p1;
    Point p2{4,3};
    Point p3{4,0};

    Point arr[]={p1,p2,p3};

    int tamaño=sizeof(arr) / sizeof(arr[0]);
    // bsort
    //imprimirpoints(arr,tamaño);
    burbuja(arr,tamaño);
    imprimirpoints(arr,tamaño);

    //

    return 0;
}