#include<iostream>
using namespace std;
#include <string>

class Punishment {
private:
    string type; // Type of punishment (e.g., imprisonment, fine, community service)
    int duration; // Duration or severity of punishment
public:
    Punishment(string type, int duration) : type(type), duration(duration) {}

    void displayInfo() {
        cout << "Type of Punishment: " << type << ", Duration: " << duration << " years" << endl;
    }
};
