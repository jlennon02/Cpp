#include <iostream>
#include <string>
using namespace std;

int sum(int const a,int const b){
    return a+b;
}
template <typename T, typename U>
T sum(const T a, const T b){
    return a+b;
}

int main(){
    cout<<sum(2,4.5)<<endl;
    //cout<<sum<string>("hola ","mundo")<<endl;
    cout<<sum<string, string>("hola ","mundo")<<endl;
    cout<<sum<float, int>(2.5,10)<<endl;
    cout<<sum<int, float>(15,5.7)<<endl;
    return 0;
}