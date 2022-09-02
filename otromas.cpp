#include <iostream>
using namespace std;
int main (){

    int año;
    bool b=;
    cout<<"ingrese el año: ";
    cin>>año;

    if (año%4==0){
        b=true;
        if (año%100==0){
            if (año%400==0){
                cout<<"es bisiesto";
            }
        else 
            cout<<"el año "<<año<<" no es bisiesto"<<endl;
        }
    }
    
    else 
        cout<<"el año "<<año<<" no es bisiesto"<<endl;

    return 0;
}