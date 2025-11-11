#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class instructor : public person {
private:
    string department;
    int experienceYears;
public:
    instructor() {
        this->department = "";
        this->experienceYears = 0;

    }
    instructor(string department, int experienceYears, string name, int id):person(name,id) {
        this->department = department;
        this->experienceYears = experienceYears;

    }
    ~instructor();
    void display();
};











#endif
