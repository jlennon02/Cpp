#include <iostream>
using namespace std;
int main (){
    int mayor;

    int a;
    
    int b;
    
    int c;

    cout<<"ingrese un valor para ""a"": ";
    cin>>a;

    cout<<"ingrese un valor para ""b"": ";
    cin>>b;

    cout<<"ingrese un valor para ""c"": ";
    cin>>c;

    if (a>b && a>c)
        mayor=a;
        
    else if (b>a && b>c)
        mayor=b;

    else if (c>a && c>b)
        mayor=c;
    
    cout<<"el mayor es: "<<mayor;

    return 0;
}