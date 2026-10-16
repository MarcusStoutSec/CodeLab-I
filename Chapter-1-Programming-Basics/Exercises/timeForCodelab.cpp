#include <iostream> 
#include <string>
#include <ctime> 
using namespace std;



int main() {
    string Time;
    string dayOfWeek;

    cout << "What Time is it? ";
    cin >> Time;

    cout << "What day of the week is it? ";
    cin >> dayOfWeek;

   if (dayOfWeek == "Friday" && Time == "10:00") {
        cout << "Time for Codelab" << endl;
    } else {
        cout << "Not Codelab" << endl;
    }


    
    return 0;
}
