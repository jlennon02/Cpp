#include <iostream>
using namespace std;

int main() {
    float BMI;
    float pesokg;
    float alturam;
    cout << "ingrese su peso: ";
    cin >> pesokg;
    cout << "ingrese su altura: ";
    cin >> alturam;
    BMI = pesokg / (alturam * alturam);


    if (BMI < 18.5) {
        cout << "Bajo de peso" << endl;
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "peso Normal" << endl;
    }
    else if (BMI >= 25.0 && BMI <=29.9) {
        cout << "Sobrepeso" << endl;
    }
    else if (BMI>=30.0) {
        cout << "obeso" << endl;
    }

    
    return 0;
}
