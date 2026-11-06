#include <iostream> 
#include <string>
using namespace std;



int main() {
    int randomNum = rand() % 10 + 1; 

    while (true) {
        int guess;
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;

        if (guess == randomNum) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else {
            cout << "Wrong guess. Try again!" << endl;
        }
    }


   







    
    return 0;
}
