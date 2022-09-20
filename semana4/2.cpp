#include <iostream>
using namespace std;

int main(){
    int fib1=1;
    int fib2=2;
    int fib3;
    int fib4;
    int fib;
    int num;
    int sum=0;
    cout<<"ingrese numero: \n";
    cin>>num;
    
    for(int cont=1;cont<=num;++cont){
      if (cont==1){
        fib=1;
      }
      else if (cont==2){
        fib=2;
        sum=2;
      }
      else{
        if(cont%2!=0){
          fib3=fib1+fib2;
          fib1=fib3;
          if (fib3<4000000){
            if (num==cont){
              fib=fib3;
            }
            if (fib3%2==0){
              sum=sum+fib3;
            }
          }
          else{
            break;
          }
        }
        else if(cont%2==0){
          fib4=fib3+fib2;
          fib2=fib4;
          if(fib4<4000000){
            if (num==cont){
              fib=fib4;
            }
            if (fib4%2==0){
              sum=sum+fib4;
            }
          }
          else{
            break;
          }
        }
      }  
    }  
  cout<<fib<<endl;
  cout<<"la suma es: "<<sum;
  
  return 0;
}