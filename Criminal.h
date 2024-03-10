#ifndef CRIMINAL_H
#define CRIMINAL_H

#include "Person.h"
#include <string>
using namespace std;

class Criminal : public Person {
private:
    string crime;
public:
    Criminal(string name, int age, char gender, string crime);
    void displayInfo();
};

#endif
