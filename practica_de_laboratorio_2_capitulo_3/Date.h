#include <string>

class Date{
public:
    Date(int month,int day,int Year)
    :dia{day},year{Year}
    {
        if(month>=1 && month<=12){
            mes= month;
        }
    }

    void setday(int day){
        dia= day;
    }
    int getday() const {
        return dia;
    }

    void setyear(int Year){
        year= Year;
    }
    int getyear() const {
        return year;
    }


    int getmonth() const {
        return mes;
    }

private:
    int month{1};
};