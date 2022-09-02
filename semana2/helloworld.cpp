#include <iostream>
using namespace std;
/*
programa qe recibe enteros por teclado e imprime la suma de ambos
*/
int main (){
    // declarando variables
    int a;
    int b;
    cout<<"ingrese un valor para ""a"": ";
    cin>>a;
    cout<<"ingrese un valor para ""b"": ";
    cin>>b;
    int suma=a+b;
    cout<<"el resultado es : "<<suma;
    return 0;
}