#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


// busqueda binaria
int main(){
    set<int> iset;
    iset.insert(5);
    iset.insert(0);
    iset.insert(3);
    iset.insert(5);
    iset.insert(7);
    iset.insert(2);
    iset.insert(1);

    cout<<"iset contains: ";
    set<int>::iterator it;
    for(it = iset.begin();it != iset.end();it++)
        cout<<" "<< *it;
    cout<<endl;

    int searchFor;
    cin>>searchFor;
    if(binary_search(iset.begin(), iset.end(),searchFor))
        cout<<"found "<<searchFor<<endl;
    else
        cout<<"did not find "<<searchFor<<endl;
    return 0;
}