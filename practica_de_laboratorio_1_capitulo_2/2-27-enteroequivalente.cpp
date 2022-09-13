#include <iostream>
using namespace std;
int main() {
    char letra;
    int num;
  
    cout<<"ingrese un caracter: ";
    cin>>letra;
    cout<<"el valor numero de la letra es: "<<static_cast<int>(letra);
  
  
    return 0;
}