#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>

class Student {
    public:
        Student(std::string, int, int);
        void getName();
        std::string setName(std::string){
            return ;
        }

        //....
    private:
        std::string name;
        int age;
        int code;
};


 #endif