#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    cout << "You only have 3 guesses\n";
    
    while (secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }else{
            outOfGuesses = true;
        }
        
    }
    
    if (outOfGuesses){
        cout << "You lose!";
    } else{
        cout << "You Win!";
    }
    return 0;
}
