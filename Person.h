#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class person {
private:
    string name;
    int id;
public:
    person(string name, int id) {
        this->name = name;
        this->id = id;
    } ;
    person() {
        this->name = "";
        this->id = 0;
    }
    ~person() ;
    void display();
};











#endif
