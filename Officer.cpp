#include "Officer.h"
#include <iostream>
using namespace std;

Officer::Officer(string name, int age, char gender, int badgeNumber, string department) : 
    Person(name, age, gender), badgeNumber(badgeNumber), department(department) {}

void Officer::displayInfo() {
    Person::displayInfo();
    cout << "Badge Number: " << badgeNumber << ", Department: " << department << endl;
}
