#include <iostream>
using namespace std;
int main() {
    int num1=12;
    int num2=23;
    int suma=num1+num2;
  
    if (num1%2==0)
      cout<<num1<<" es un numero par"<<endl;
    else
      cout<<num1<<" es un numero impar"<<endl;

    if (num2%2==0)
      cout<<num2<<" es un numero par"<<endl;
    else
      cout<<num2<<" es un numero impar"<<endl;

    if (suma%2==0)
      cout<<"el resultado de la suma, "<<suma<<", es un numero par"<<endl;
    else
      cout<<"el resultado de la suma, "<<suma<<", es un numero impar"<<endl;
    return 0;
}