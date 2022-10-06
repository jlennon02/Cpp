#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(){
    array<int ,5> n{32,27,64,18,95};

    cout<< "elemento" <<setw(10)<<"valor"<<endl;

    for(size_t j{0};j<n.size();++j){
        cout<<setw(7)<<j<<setw(10)<<n[j]<<endl;
    }
}