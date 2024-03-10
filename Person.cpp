#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string name, int age, char gender) : name(name), age(age), gender(gender) {}

void Person::displayInfo() {
    cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
}
