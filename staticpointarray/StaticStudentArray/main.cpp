#include <iostream>
#include "StaticStudentArray.h"

using namespace std;

int main() {

    StaticStudentArray a(2);    

    a.setAt(0, "juan salas");
    a.setAt(1, "malo vera");   
    a.setAt(2, "bueno cigo");   

    cout << a << endl;    
 
    return 0;
}
