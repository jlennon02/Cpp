#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main(){
    MotorVehicle vehicle1{"Ferrari","combustible liquido","azul",2022,28};
    MotorVehicle vehicle2{"Motorola","combustible liquido","rojo",2025,40};

    cout << "make: " << vehicle1.getmake() <<"fuel type: "<< vehicle1.getfuel()<<"color is: "<<vehicle1.getcolor()<< " year of manufacturer: "<< vehicle1.getyear()<<"capacity: $"<< vehicle1.getcapacity();
    cout << "\nmake: " << vehicle2.getmake() <<"fuel type: "<< vehicle2.getfuel()<<"color is: "<<vehicle2.getcolor()<< " year of manufacturer: "<< vehicle2.getyear()<<"capacity: $"<< vehicle2.getcapacity();
}