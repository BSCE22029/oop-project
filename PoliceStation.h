#ifndef POLICESTATION_H
#define POLICESTATION_H

#include <iostream>
#include "Officer.h"
#include "PoliceStation.h"
#include "Case.h"
#include"Criminal.h"
#include <vector>
using namespace std;
#include <string>

class PoliceStation {
private:
    string name;
    string location;
    vector<Officer> officers;
    vector<Criminal> criminals; // Track criminal
      vector<Case> cases; // Manage cases
public:
    PoliceStation(string name, string location);
    void addOfficer(Officer& officer);
    void displayOfficers();
    void addCriminal(Criminal& criminal);
    void displayCriminals();
    void addCase(Case& crimeCase); // Add a new case
    void displayCases(); // Display all cases
};

#endif
