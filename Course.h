#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

class course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    course() {
        this->courseCode = "";
        this->courseName = "";
        this->maxStudents = 10;
        this->students = nullptr;
        this->currentStudents = 0;
    }
    course( string courseCode, string courseName, int maxStudents) {
        this->courseCode = courseCode;
        this->courseName = courseName;
        this->maxStudents = maxStudents;
        this->students = nullptr;
        this->currentStudents = 0;
    }
    ~course() {
        delete [] students;
    }
    void addstudent(const Student& s);
    void displayCourseInfo();

};












#endif
