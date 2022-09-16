#include <iostream>
using namespace std;
int main() {
    int ent;
    int a;
    int b;
    int c;
    int d;
    cout<<"ingrese un entro de 4 digitos: ";
    cin>> ent;

    //  9632

    
    a=ent/1000;
    b=(ent-a*1000)/100;
    c=(ent-a*1000-b*100)/10;
    d=ent-a*1000-b*100-c*10;

    cout<<d<<"  "<<c<<"  "<<b<<"  "<<a;
    
    
      
    return 0;
}