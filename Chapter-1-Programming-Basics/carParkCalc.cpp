#include <iostream> 
#include <string>
using namespace std;



int main() {
   const double RATE_PER_HOUR = 2.40; // Rate per hour in pounds
   int hoursStayed; //Defines Integer for hours stayed in the car park
   double totalCost = hoursStayed * RATE_PER_HOUR; //Calculates total cost of parking by multiplying hours stayed by rate per hour


    cout << "How many hours did you stay in the car park? ";  //Asks user how long their car was parked in the car park
    cin >> hoursStayed;


    cout << "The total cost of parking for " << hoursStayed << " hours is £" << totalCost << "." << endl; //Outputs Variables and calculated total cost

    return 0;
}
