#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int i=0;
    for (;i<1000;i++)
    {
        if ((i%3==0)||(i%5==0))
            sum=sum+i;
    }
    cout<<sum;
    return 0;
}