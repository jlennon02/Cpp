#include <iostream>
#include <array>
using namespace std;
// &var  apuntando a la direccion de memoria
// & por referencia
int  main(){
    int* ptr, contador;
    contador=10;
    cout<<ptr<<" , "<<contador<<endl;
    int* contadorptr{nullptr}; 
    contadorptr = &contador;
    cout<<contadorptr;
    return 0;
}