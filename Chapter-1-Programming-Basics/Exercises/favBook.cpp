#include <iostream> 
#include <string>
using namespace std;

// This program prompts the user to enter their favorite book and author.

int main() {
    string favBook;  //Defines String for Favourite book
    string authorName; //Defines string for Author name
    int yearPublished; //Defines Integer for Year Published
 
    cout << "Enter your favourite book";  //Asks user to enter Fav book and then stores it in favBook variable
    cin >> favBook;

    cout << "Enter the author of the book"; //Asks user to enter Author name and then stores it in authorName variable
    cin >> authorName;

    cout << "What year was the book published? "; //Asks user to enter Year Published and then stores it in yearPublished variable
    cin >> yearPublished;

    cout << "Your favourite book is " << favBook << " by " << authorName << ", published in " << yearPublished << "." << endl; //Outputs Variables in nice format
    return 0;
}
