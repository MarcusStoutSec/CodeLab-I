#include <iostream>
#include <string>
using namespace std;

int main() {
    int friendLateness;
    int moneyOwned;

    cout << "How many minutes late is your friend going to be?";
    cin >> friendLateness;

    cout << "How much money do you currently have?";
    cin >> moneyOwned;

    if (friendLateness >= 15) {
        if (moneyOwned > 3) {
            cout << "You Buy a coffee and wait for your friend" << endl;
        } else {
            cout << "You go for a walk and wait for your friend" << endl;
        }
    } else {
        cout << "You do nothing and wait for your friend in the park " << endl;
    }

    return 0;
}
