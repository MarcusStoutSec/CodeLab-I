#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstNames[5];
    string secondNames[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter the first name of student " << i + 1 << ": ";
        cin >> firstNames[i];
        cout << "Enter the second name of student " << i + 1 << ": ";
        cin >> secondNames[i];
    }

    cout << "\nClass register\n";
    cout << "--------------\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << firstNames[i] << " " << secondNames[i] << '\n';
    }

    return 0;
}
