#include <iostream>
using namespace std;
int main() {
    int num1=2;
    int num2=4;
    int num3=8;
    if (num3%num1==0 && num3%num2==0)
      cout<<"los numeros "<<num1<<" y "<<num2<<" son factores de "<<num3<<endl;
    else if (num3%num1==0)
      cout<<"solo "<<num1<<" es un factor de "<<num3<<endl;
    else if (num3%num2==0)
      cout<<"solo "<<num2<<" es un factor de "<<num3<<endl;
    else
      cout<<"de dos, ningu numero es factor de"<<num3;
  
    return 0;
}