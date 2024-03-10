#include <iostream>
#include "PoliceStation.h"
#include"Officer.h"
#include"Criminal.h"
#include"Case.h"
using namespace std;
#include<string>

PoliceStation::PoliceStation(string name, string location) : name(name), location(location) {}

void PoliceStation::addOfficer(Officer& officer) {
    officers.push_back(officer);
}

void PoliceStation::displayOfficers() {
    cout << "Officers at " << name << " Police Station:" << endl;
    for (const auto& officer : officers) {
        officer.displayInfo();
    }
}
void PoliceStation::addCriminal(Criminal& criminal) {
    criminals.push_back(criminal);
    cout << "Criminal added to the system: " << criminal.getName() << endl;
}

void PoliceStation::displayCriminals() {
    cout << "Criminals in the system:" << endl;
    for (const auto& criminal : criminals) {
        criminal.displayInfo();
    }
}