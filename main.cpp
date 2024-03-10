#include "Officer.h"
#include "Criminal.h"
#include "PoliceStation.h"

int main() {
    PoliceStation station("Main", "City Center");

    Officer officer1("John Doe", 35, 'M', 1234, "Patrol");
    Officer officer2("Jane Smith", 40, 'F', 5678, "Detective");

    Criminal criminal1("Michael Johnson", 25, 'M', "Theft");
    Criminal criminal2("Sarah Parker", 30, 'F', "Assault");

    station.addOfficer(officer1);
    station.addOfficer(officer2);

    station.displayOfficers();

    return 0;
}
