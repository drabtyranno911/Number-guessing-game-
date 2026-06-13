#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    srand(time(0)); 
    int randomNumber = rand() % 100 + 1; //This will give a number between 1 and 100 randomly 
    int userGuess;

    cout << "Welcome to the Number Guessing Game!" << '\n';
    cout << "I have selected a random number between 1 and 100. Can you guess it?" << '\n';

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;               

        if (userGuess < randomNumber) {
            cout << "Too low" << '\n';
        } else if (userGuess > randomNumber) {
            cout << "Too high" << '\n';
        } else {
            cout << "You guessed the number" << '\n';
        }
    }

    return 0;
}
