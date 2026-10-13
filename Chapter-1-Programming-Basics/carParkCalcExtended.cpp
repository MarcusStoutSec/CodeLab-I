#include <iostream> 
#include <string>
using namespace std;



int main() {
   const double RATE_PER_HOUR_Day = 2.40; 
   const double RATE_PER_HOUR_Night = 1.00;
   int hoursStayed; 
   int timeOfDay;

    cout << "How many hours did you stay in the car park? ";  
    cin >> hoursStayed;

    cout << "What time of day was your stay? (Enter 1 for Before 18:00, 2 for after 18:00): ";  
    cin >> timeOfDay;

    if (timeOfDay == 1) {
        double totalCost = hoursStayed * RATE_PER_HOUR_Day; 
        cout << "The total cost of parking for " << hoursStayed << " hours is £" << totalCost << "." << endl; 
    } else if (timeOfDay == 2) {
        double totalCost = hoursStayed * RATE_PER_HOUR_Night; 
        cout << "The total cost of parking for " << hoursStayed << " hours is £" << totalCost << "." << endl; 
    } else {
        cout << "Invalid input for time of day." << endl;
    }


    return 0;
}
