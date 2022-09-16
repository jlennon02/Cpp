#include <string>
//  
class MotorVehicle{
private:
    std::string maker;
    std::string fuel;
    std::string color;
    int year;
    int capacity;
public:
    MotorVehicle(std::string Make, std::string fuel_type, std::string Color,int year_of_manufacture, int engine_capacity)
    :maker{Make},fuel{fuel_type},color{Color},year{year_of_manufacture},capacity{engine_capacity}
    { 
        year=year_of_manufacture;
        if(engine_capacity>0){
            capacity = engine_capacity;
        }
    }


    void setmake(std::string Make) {
        maker = Make;
    }
    std::string getmake() const {
        return maker;
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

    int getyear() const {
        return year;
    }
    int getcapacity() const {
        return capacity;
    }

};