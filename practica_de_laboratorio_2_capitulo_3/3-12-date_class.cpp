#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date date{9,14,2022};


    cout << "year is: " << date.getyear() <<"month is: "<< date.getmonth() << "day is: $"<<date.getday();
}