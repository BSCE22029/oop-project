#include <iostream>
#include "Criminal.h"
#include"Officer.h"


using namespace std;

Criminal::Criminal(string name, int age, char gender, string crime) : Person(name, age, gender), crime(crime) {}

void Criminal::displayInfo() {
    Person::displayInfo();
    cout << "Crime: " << crime << endl;
}
void Officer::reportCrime(Criminal& criminal) {
    reportedCrimes.push_back(criminal);
    cout << "Crime reported successfully by Officer " << name << endl;
}

void Officer::displayReportedCrimes() {
    cout << "Reported Crimes by Officer " << name << ":" << endl;
    for (const auto& crime : reportedCrimes) {
        cout << "- " << crime.getName() << ": " << crime.getCrime() << endl;
    }
}
