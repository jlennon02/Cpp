#include <iostream>
using namespace std;
int main() {
    int i=1;
    long long sum=0;
    while(i<=2000000){
      int cont=0;
      for(int j=1;j<=i;j++){
        if(i%j==0){
          cont=cont+1;
        }
      }
      if(cont==2){
        sum=sum+i;
        ++i;
      }
      else{
        ++i;
      }
    }
    cout<<"suma: "<<sum<<endl;
    return 0;
}