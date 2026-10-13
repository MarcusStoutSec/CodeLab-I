#include <iostream> 
#include <string>
using namespace std;



int main() {
   const double RATE_PER_HOUR = 2.40; 
   int hoursStayed; 
   

    cout << "How many hours did you stay in the car park? ";  
    cin >> hoursStayed;

    double totalCost = hoursStayed * RATE_PER_HOUR; 

    cout << "The total cost of parking for " << hoursStayed << " hours is £" << totalCost << "." << endl; 

    return 0;
}
