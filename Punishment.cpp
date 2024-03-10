#include<iostream>
#include "Punishment.h"
#include"Person.h"
using namespace std;
#include <string>

class Criminal : public Person {
private:
    string crime;
    Punishment punishment; // Associated punishment for the crime
public:
    Criminal(string name, int age, char gender, string crime, Punishment punishment) : 
        Person(name, age, gender), crime(crime), punishment(punishment) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Crime: " << crime << endl;
        punishment.displayInfo(); // Display associated punishment
    }
};
