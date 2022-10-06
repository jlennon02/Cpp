#include <iostream>
using namespace std;

void intercambio(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void insercion(int arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main(){
    int arreglo[]={24,62,8,115};

    
    int x=10;
    //sizeof -> retorna el tamaño en bytes del tipo de dato
    int tamaño=sizeof(arreglo) / sizeof(arreglo[0]);
    cout<<sizeof(x)<<endl;
    
    insercion(arreglo,tamaño);
    
    for(int i=0;i<4;i++){
        cout<<arreglo[i]<<" ";
    }
    return 0;
}