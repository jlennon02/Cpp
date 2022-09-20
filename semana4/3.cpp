#include <iostream>
using namespace std;

int main() {
    long long num=600851475143;  
    
    for(long long i=1;i<=num;i++){
      long long cont=0;
      
      if(num%i==0){
        
        for (long long j=1;j<=i;j++){
          if (i%j==0){
            ++cont;
          }
        }
        if (cont==2){
            cout<<i;
            cout<<" es primo\n";
        }
        else{
          cout<<i<<" no es primo\n";
        }
      }
    }
    return 0;
}