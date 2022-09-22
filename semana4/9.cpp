#include <iostream>
using namespace std;

int main() {
  int producto;
  int a;
  int b;
  int c;
  bool termino=false;
  for(int i=1;i>=1;i++){
    for(int j=1;j<i;j++){
      for(int m=1;m<j;m++){
        if((m*m + j*j ==i*i) && (m+j+i==1000)){
          a=m;
          b=j;
          c=i;
          termino=true;
          break;
        }
      }
      if(termino==true){
        break;
      }
    }
    if(termino==true){
        break;
    }
  }
  producto=a*b*c;
  cout<<producto<<endl;
  return 0;
}