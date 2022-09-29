//arrays
#include <string>
#include <iostream>
using namespace std;
int main(){
    const int  i=4;
    const int  j=4;
    int arreglo[i];
    arreglo[0]=10;
    arreglo[1]=5;
    arreglo[2]=4;
    arreglo[3]=8;

    int array[j]={21,65,98,15};

/*
    cout<<arreglo[0]<<endl;
    cout<<arreglo[1]<<endl;
    cout<<arreglo[2]<<endl;
    cout<<arreglo[3]<<endl;
*/
    for(int a=0;a<i;a++){
        cout<<arreglo[a]<<endl;
    }

    for(int a=0;a<j;a++){
        cout<<array[a]<<endl;
    }
    return 0;
}