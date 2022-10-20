#include<iostream>
using namespace std;

int main(){
    int a{7};
    int* aptr= &a;
    cout<<"la direccion de la variable ""a"" es: "<<&a<<"\nel valor de aptr es: "<<aptr;
    cout<<"\nel valor de a es: "<<a<<"\nel valor de *aptr es: "<<*aptr<<endl;
    return 0;
}