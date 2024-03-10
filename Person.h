#ifndef PERSON_H
#define PERSON_H
#include<iostream>

using namespace std;
#include <string>

class Person {
protected:
    string name;
    int age;
    char gender;
public:
    Person(string name, int age, char gender);
    void displayInfo();
};

#endif
