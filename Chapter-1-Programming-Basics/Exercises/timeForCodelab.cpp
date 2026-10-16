#include <iostream> 
#include <string>
#include <ctime> 
using namespace std;

//Program to check if the current day of the week is Friday and the time is 10:00 AM

int main() {
    string Time;
    string dayOfWeek;

    cout << "What Time is it? ";
    cin >> Time;

    cout << "What day of the week is it? ";
    cin >> dayOfWeek;

   if (dayOfWeek == "Friday" && Time == "10:00") {
        cout << "It's time for CodeLab!" << endl;
    } else {
        cout << "It's not time for CodeLab yet." << endl;
    }







    
    return 0;
}
