#include <iostream> 
#include <string>
using namespace std;



int main() {
    int choice;

    cout << "Enter a Number Corresponding to a Day of the Week (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Monday." << endl;
            break;
        case 2:
            cout << "You selected Tuesday." << endl;
            break;
        case 3:
            cout << "You selected Wednesday." << endl;
            break;
        case 4:
            cout << "You selected Thursday." << endl;
            break;
        case 5:
            cout << "You selected Friday." << endl;
            break;
        case 6:
            cout << "You selected Saturday." << endl;
            break;
        case 7:
            cout << "You selected Sunday." << endl;
            break;
        default:
            cout << "Invalid selection. Please enter a number between 1 and 7." << endl;
    }
   

    return 0;
}
