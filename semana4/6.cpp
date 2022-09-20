#include <iostream>
using namespace std;

int main() {
    int sum1=0;
    int sum2=0;
    for (int i =1;i<=100;i++){
      sum1=i*i+sum1;
    }
  
    for (int j=1;j<=100;j++){
      sum2=j+sum2;
    }
  sum2=sum2*sum2;
  cout<<"el cuadrado de la suma: "<<sum2<<endl;
  cout<<"la suma de cuadrados: "<<sum1<<endl;
  cout<<"la suma de ambos es: "<<sum2-sum1;
    return 0;
}