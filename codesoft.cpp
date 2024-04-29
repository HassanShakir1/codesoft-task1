#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // Initialize variables
    int guess;
    bool guessedCorrectly = false;
    int attempts = 0;

    // Game loop
    while (!guessedCorrectly) {
        // Ask the user to guess the number
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;

        // Increment attempts counter
        attempts++;

        // Check if the guess is correct
        if (guess == randomNumber) {
            guessedCorrectly = true;
            cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}