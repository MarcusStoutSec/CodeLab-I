#include <iostream> 
#include <string>
using namespace std;



int main() {
    int choice;

    cout << "Select a Record- 1.Metallica 2.Queen 3.The Amazons 4. Zeal and Ardor" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Metallica." << endl;
            break;
        case 2:
            cout << "You selected Queen." << endl;
            break;
        case 3:
            cout << "You selected The Amazons." << endl;
            break;
        case 4:
            cout << "You selected Zeal and Ardor." << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }


    return 0;
}
