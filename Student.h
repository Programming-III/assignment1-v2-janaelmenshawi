#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class Student : public person{
private:
    int yearLevel;
    string major;
public:
    Student() {
        this->yearLevel = 0;
        this->major = "";
    };
    Student(string name, int id, string major, int yearLevel):person(name,id) {
        this->major = major;
        this->yearLevel = yearLevel;
    }
    ~Student();
    void display();

};











#endif
