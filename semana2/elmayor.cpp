#include <iostream>
using namespace std;
int main (){

    int a;
    
    int b;

    cout<<"ingrese un valor para ""a"": ";
    cin>>a;

    cout<<"ingrese un valor para ""b"": ";
    cin>>b;

    if (a>b)
    cout<<"el mayor es: "<<a;
    else if (b>a)
    cout<<"el mayor es: "<<b;

    return 0;
}