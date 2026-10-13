#include <iostream> 
#include <string>
using namespace std;



int main() {
    string dayOfWeek; //Defines String for Day of the Week

    cout << "Enter the day of the week: "; //Asks user to enter Day of the Week and then stores it in dayOfWeek variable
    cin >> dayOfWeek;

    if (dayOfWeek == "Monday") { //Checks if dayOfWeek is equal to Monday
        cout << "Happy Monday! Let's have a productive week!" << endl; //Outputs message for Monday
    } else if (dayOfWeek == "Tuesday") { //Checks if dayOfWeek is equal to Tuesday
        cout << "It's Tuesday! Keep going!" << endl; //Outputs message for Tuesday
    } else if (dayOfWeek == "Wednesday") { //Checks if dayOfWeek is equal to Wednesday
        cout << "Happy Hump Day! You're halfway through the week!" << endl; //Outputs message for Wednesday
    } else if (dayOfWeek == "Thursday") { //Checks if dayOfWeek is equal to Thursday
        cout << "It's Thursday! The weekend is almost here!" << endl; //Outputs message for Thursday
    } else if (dayOfWeek == "Friday") { //Checks if dayOfWeek is equal to Friday
        cout << "Happy Friday! The weekend is here!" << endl; //Outputs message for Friday
    } else if (dayOfWeek == "Saturday") { //Checks if dayOfWeek is equal to Saturday
        cout << "It's Saturday! Enjoy your weekend!" << endl; //Outputs message for Saturday
    } else if (dayOfWeek == "Sunday") { //Checks if dayOfWeek is equal to Sunday
        cout << "Happy Sunday! Relax and recharge for the week ahead!" << endl; //Outputs message for Sunday
    } else { //If none of the above conditions are met, it means the input was invalid
        cout << "Invalid input. Please enter a valid day of the week." << endl; //Outputs error message for invalid input
    }

    return 0;
}
