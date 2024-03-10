#include <iostream>
#include "Case.h"
#include"Officer.h"
#include"Person.h"
#include"PoliceStation.h"
using namespace std;
#include<string>
Case::Case(string caseID, string description, string status) : 
    caseID(caseID), description(description), status(status) {}

void Case::addOfficer(Officer& officer) {
    assignedOfficers.push_back(officer);
}

void Case::displayInfo() {
    cout << "Case ID: " << caseID << endl;
    cout << "Description: " << description << endl;
    cout << "Status: " << status << endl;
    cout << "Assigned Officers:" << endl;
    for (const auto& officer : assignedOfficers) {
        officer.displayInfo();
    }
}

string Case::getStatus() {
    return status;
}

void Case::setStatus(string newStatus) {
    status = newStatus;
}
