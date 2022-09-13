#include <string>
//  
class MotorVehicle{
    MotorVehicle(std::string Make, std::string fuel_type, std::string Color,int year_of_manufacture, int engine_capacity)
    :make{Make}
    fuel{fuel_type}
    color{Color}
    { 
        yaer=year_of_manufacture;
        if(engine_capacity>0){
            capacity = engine_capacity;
        }
    }


    void setmake(std::string Make) {
        make = Make;
    }
    std::string getmake() const {
        return make;
    }

    void setfuel(std::string fuel_type) {
        fuel = fuel_type;
    }
    std::string getfuel() const {
        return fuel;
    }

    void setcolor(std::string Color) {
        color = Color;
    }
    std::string getcolor() const {
        return color;
    }

    int getyear_of_manufacture() const {
        return year;
    }
    int getengine_capacity() const {
        return capacity;
    }

};