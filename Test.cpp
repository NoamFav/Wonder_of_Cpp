#include <iostream>
using namespace std;

int main() {
    int number = 101;
    cout << "Welcome to C++ " << number << endl;
    cout << "What can I help you with?" << endl;
    cout << "\a";
    string variable;
    getline(cin, variable);
    auto var = "nfoenepzo";

    if (variable == "help me") {
        cout << "I'll help you" << endl;
        variable = variable.append(" " + variable);
        cout << variable;
    } else {
        cout << "You entered: " << variable << endl;
    }

    string i = (variable == "nothing") ? "Fuck off then" : "Perfect then";

    cout << var << endl;

    int *p = &number;
    cout << p;
}