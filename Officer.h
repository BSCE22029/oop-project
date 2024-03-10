#ifndef OFFICER_H
#define OFFICER_H

#include "Person.h"
#include <vector>
#include "Criminal.h"
using namespace std;
#include <string>

class Officer : public Person {
private:
    int badgeNumber;
    string department;
     vector<Criminal> reportedCrimes; // Keep track of reported crimes
public:
    Officer(string name, int age, char gender, int badgeNumber, string department);
    void displayInfo();
    void reportCrime(Criminal& criminal);
    void displayReportedCrimes();
};

#endif
