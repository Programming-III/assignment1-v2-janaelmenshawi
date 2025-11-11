#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

void person :: display() {
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
}
void student :: display() {
    cout<<"Student info: "<<endl;
    person :: display();
    cout<<"Year: "<<yearLevel<<endl;
    cout<<"major: "<<major<<endl;

}
void instructor :: display() {
    cout<<"Instructor info: "<<endl;
    person :: display();
    cout<<"Department: "<<department<<endl;


}
void :: course addstudent(const Student& s) {
    if (currentStudents<maxStudents) {
        Student *temp=new Student[currentStudents+1];
        for (int i=0;i<currentStudents;i++) {
            temp[i]=students[i];
        }
        temp[currentStudents]=s;
        delete [] students;
        students=temp;
    }
}

void :: course displayCourseInfo() {
   cout<<"Course info: "<<endl;
    cout<<"max num: "<<maxStudents<<endl;
    cout<<"currently enrolled : "<<currentStudents<<endl;
    for (int i=0;i<currentStudents;i++) {
       students[i].display();
    }
}

int main() {
    student x("jana",1,"s",2);
    instructor y("hi",12,"j",12);
    course z("si","uds",1);
    z.addstudent(x);
    z.displayCourseInfo();
    x.display();
    y.display();


    return 0;
    
}
