#include <iostream>
using namespace std;

int main() {
    int i=1;
    int j=1;
  
    for (;i<=1001;){
      int cont=0;
      j=1;
      
      for (;j>=1;j++){
        if(i%j==0){
          cont=cont+1;
        }
      }
      
      if(cont==2){
        i=i+1;
      }
    }
    cout<<"primo numero mil: "<<j<<endl;
    return 0;
}