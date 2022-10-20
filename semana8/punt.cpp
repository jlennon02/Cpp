#include<iostream>
using namespace std;

int main(){
    int y = 20;

    int &ref = y;
    int *ptr = &y;// "*" es la declarion de una variable puntero de tipo entero igualada a la posicion de memoria de "y"

    cout<<ptr<<endl;
    cout<<&y;
    return 0;
}