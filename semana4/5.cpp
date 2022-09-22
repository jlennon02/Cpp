#include <iostream>
using namespace std;
int main() {
    int num=1;
    ///////////////////////////////////////////////////
    for (;num>=1;num++){
      int cont=0; 
      bool verdad=false;
      for (int i=1;i<=num;i++){
        if(num%i==0){
          switch (i){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
              cont=cont+1;
              break;
            default:
              break;
          }
        }
        if(cont==20){
          verdad=true;
          break;
        }
      }
      if (verdad==true){
        break;
      }
    }

    return 0;
}