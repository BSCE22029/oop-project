#include <string>
#include <vector>
#include "Officer.h"
using namespace std;

class Case {
private:
    string caseID;
    string description;
    vector<Officer> assignedOfficers;
    string status;
public:
    Case(string caseID, string description, string status);
    void addOfficer(Officer& officer);
    void displayInfo();
    string getStatus();
    void setStatus(string newStatus);
};
