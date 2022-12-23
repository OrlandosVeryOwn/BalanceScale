#include <iostream>
using namespace std;

void intro(){
    //GAME INTRO / RULES
    cout << "Balance Scale." << endl;
    cout << endl;
    cout << "Rules:" << endl;
    cout << "Within a three minute time limit, select a number between 0 and 100." << endl;
    cout << "The average of the numbers chosen is then multiplied by 0.8." << endl;
    cout << "The person who chooses the number closest to this is the winner." << endl;
    cout << endl;
    cout << "Everyone, except for the winner, loses one point." << endl;
    cout << "Then the round ends." << endl;
    cout << "When a player reaches negative ten points the game is over for that player." << endl;
    cout << "The person who survives until the end is the victor." << endl;
    cout << "However, every time a player loses, a new rule is introduced." << endl;
    cout << endl;
    cout << endl;
}
int main() {
    // VARIABLES
    const int NUM_PLAYERS = 5;
    const double MULTIPLE = 0.8;
    double answer = 0.0;
    double average = 0.0;
    double totals = 0.0;
    int guess[NUM_PLAYERS];
    string players[NUM_PLAYERS];
  
  // FUNCTION CALL TO INTRO
    intro();
  
    // Loop through each player and ask for their name
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << "Player " << i+1 << ", what is your name?" << endl;
        cin >> players[i];
    }
    cout << endl;
    cout << "Welcome players. Round 1 will now start.";
    cout << endl << endl;

  // GUESSES START
       // Loop through each player and ask for their number
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << players[i] << ", please enter a number 0 - 100." << endl;
        cin >> guess[i];

        // Validate the input
        while (guess[i] < 0 || guess[i] > 100) {
            cout << players[i] << ", that is an invalid number. Please enter a number 0 - 100." << endl;
            cin >> guess[i];
        }
    }
  // GUESSES END

    //ASSIGNING VARIABLES
    totals = (guess[0] + guess[1] + guess[2] + guess[3] + guess[4]);
    average = totals / 5;
    answer = average * MULTIPLE;

    cout << endl;
    cout << "Here are the results for round 1." << endl;
    cout << endl;
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << players[i] << ": " << guess[i] << endl;
    }
    cout << endl;
    cout << "The totals of all players' guesses is: " << totals << endl;
    cout << "The average of all players' guesses is: " << average << endl;
    cout << "Which makes the answer: " << answer << endl;

    return 0;
}
