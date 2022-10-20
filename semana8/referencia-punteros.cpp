#include<iostream>
using namespace std;
void cuboporrefconptrs(int* ptr){
    *ptr=*ptr * *ptr * *ptr ;
}
//intercambio
void intercambio(int* a,int* b){
    int temp =*a;
    *a=*b;
    *b= temp;

}
int main(){
    /*
    int y=4;
    cuboporrefconptrs(&y);
    cout<<y<<endl;
    */

    int x=20;
    int y=40;
    intercambio(&x,&y);
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    return 0;
}