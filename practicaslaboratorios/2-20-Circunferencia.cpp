#include <iostream>
using namespace std;
int main() {
    int radio;
    float pi=3.14159;
    float diametro;
    float area;
  
    cout<<"indique el valor del radio: ";
    cin>>radio;

    diametro= 2*radio;
    area= pi*radio*radio;

    cout<<"el diametro es: "<<diametro<<endl;
    cout<<"el area es: "<< area;
    return 0;
}