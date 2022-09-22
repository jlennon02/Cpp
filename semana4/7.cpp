#include <iostream>
using namespace std;

int main(){
  int pos=6;
  int i=1;
  bool fina =false;
  while(i>=1){
    if(i==12){
      fina=true;
    }
    if(fina==true){
      break;
    }
    cout<<i;
    i++;
  }
  
  
  
  return 0;
}