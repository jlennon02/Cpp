#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date date{9,14,2022};
    cout << "year is: " << date.getyear() <<"\n"<<"month is: "<< date.getmonth() <<"\n"<< "day is: "<<date.getday();
    return 0;
}