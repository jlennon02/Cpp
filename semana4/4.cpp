#include <iostream>
using namespace std;
int main() {
    int a=10;
    int b=10;
    int c=10;
    int num;
    int reminder;
    int reverse=0;
    int temp;
  
    for(;a<100;a++){
      for(;b<100;b++){
        for(;c<100;c++){
          num=a*b*c;

          
          temp=num;

          while (temp > 0){
          	reminder = temp % 10;
          	reverse = reverse * 10 + reminder;
          	temp = temp / 10;
          }
          cout << "revertido: " << reverse <<"\t";
	
	        if(num == reverse) {
		        cout << num << " palindromo\n";
	        }	
        	else {
        		cout << num << " no palindromo\n";
        	}
        }
      }
    }
    
    return 0;
}