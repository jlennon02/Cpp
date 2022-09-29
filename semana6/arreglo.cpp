#include <iostream>
using namespace std;

int main(){
    int arr [4];
    cout<<"por favor ingrese 4 valores enteros: "<<endl;
    for(int i ;i<4;i++){
        cin>>arr[i];
    }
    cout<<"los valores en el arreglo son: ";
    for (int i =0;i<4;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}