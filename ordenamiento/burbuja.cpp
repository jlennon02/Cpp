#include <iostream>
using namespace std;

/*
investigar el metodo de ordenamiento burbuja e implementarlo
*/
void intercambio(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void burbuja(int arr[],int tam){
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam-1;j++){
            if(arr[j]>arr[j+1]){
                intercambio(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arreglo[]={24,62,8,115};

    burbuja(arreglo,4);
    for(int i=0;i<4;i++){
        cout<<arreglo[i]<<" ";
    }
    return 0;
}