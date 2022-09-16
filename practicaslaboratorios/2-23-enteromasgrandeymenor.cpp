#include <iostream>
using namespace std;
int main() {
    int a1=21;
    int a2=12;
    int a3=46;
    int a4=4;
    int a5=86;
    int mayor;
    int menor;
  
    if ((a1>=a2) && (a1>=a3) && (a1>=a4) && (a1>=a5))
      mayor=a1;
    else if ((a2>=a1) && (a2>=a3) && (a2>=a4) && (a2>=a5))
      mayor=a2;
    else if ((a3>=a1) && (a3>=a2) && (a3>=a4) && (a3>=a5))
      mayor=a3;
    else if ((a4>=a1) && (a4>=a2) && (a4>=a3) && (a4>=a5))
      mayor=a4;
    else if ((a5>=a1) && (a5>=a2) && (a5>=a3) && (a5>=a4))
      mayor=a5;

    if ((a1<=a2) && (a1<=a3) && (a1<=a4) && (a1<=a5))
      menor=a1;
    else if ((a2<=a1) && (a2<=a3) && (a2<=a4) && (a2<=a5))
      menor=a2;
    else if ((a3<=a1) && (a3<=a2) && (a3<=a4) && (a3<=a5))
      menor=a3;
    else if ((a4<=a1) && (a4<=a2) && (a4<=a3) && (a4<=a5))
      menor=a4;
    else if ((a5<=a1) && (a5<=a2) && (a5<=a3) && (a5<=a4))
      menor=a5;

    cout<<"el numero entero mayor es: "<<mayor<<endl;
    cout<<"el numero entero menor es: "<<menor;
      
    return 0;
}