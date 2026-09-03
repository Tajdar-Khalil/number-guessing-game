/* 
==================================================
Program: Number Guessing Game
Author: Tajdar Khalil
Description: This is a simple number guessing game where the user has to guess a randomly generated number between 1 and 100. The program provides feedback on whether the guess is too high or too low, and counts the number of attempts made by the user.
===============================================`    
*/
#include<iostream> 
#include<cstdlib>
#include<ctime>
using namespace std;

// Function to generate a random number between 1 and 100

int main(){
 
    int number, guess, attempts =0;
    number = rand() % 100 + 1; // Generates a random number between 1 and 100
    cout <<"============================================" << endl;
    cout <<"Number Guessing Game" << endl;
    cout <<"============================================" << endl;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "The computer has selected a number between 1 and 100. Let's see if you can guess it!" << endl;
    cout <<"---------------------------------------------\n" << endl;

    while(guess != number){
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if(guess < number){
            cout << "Too low! Try again." << endl;
        } else if(guess > number){
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
        }
    }
    return 0;
}