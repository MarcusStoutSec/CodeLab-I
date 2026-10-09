#include <iostream> 
#include <string>
using namespace std;

int main() {
    string firstName;
    string lastName;
    string hometown;
    int age;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter your hometown: ";
    cin >> hometown;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello! My name is " << firstName << " " << lastName
         << ", I'm from " << hometown << " and I am " << age << " years old." << endl;

    return 0;
}