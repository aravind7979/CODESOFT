/****************************************************
 * Program Name : Number Guessing Game
 * Author       : ARAVIND BABU
 * Date Created : 06-11-2025
 * Description  : A simple number guessing game that
 *                demonstrates basic I/O and control flow
 ****************************************************/

#include <iostream>
#include <cstdlib> // for rand(), srand()
#include <ctime>   // for time()
using namespace std;

int main(){
    cout << "WELCOME TO NUMBER GUESSING GAME!\n";
    
    srand(time(0)); // ensures different random numbers each time the program runs
    int randomNumber = rand() % 100 + 1; // random number between 1 and 100
    
    int guess;
    int attempts = 0;
    
    cout << "Guess the number (1-100): ";
    
    while(true){
        cin >> guess;

        // handle non-numeric input
        if (!cin) {
            cin.clear();               // clear error state
            cin.ignore(1000, '\n');    // discard invalid input
            cout << "Please enter a number between 1 and 100: ";
            continue;
        }
        
        if(guess < 1 || guess > 100) {
            cout << "Number out of range! Enter between 1 and 100: ";
            continue;
        }
        
        attempts++;
        
        if(guess == randomNumber){
            cout << "Correct! You guessed it in " << attempts << " tries.\n";
            break;
        }
           
        else if(guess < randomNumber)
            cout << "Too low! Try again: ";
            
        else if (guess > randomNumber)
            cout << "Too high! Try again: ";
    }
    
    return 0;
}
