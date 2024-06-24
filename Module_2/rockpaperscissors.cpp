#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {
    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    int seed;
    cin >> seed;
    srand(seed);

    string player1, player2;
    int rounds;
    cin >> player1 >> player2;
    cin >> rounds;
    while (rounds < 1) {
        cout << "Rounds must be > 0\n";
        cin >> rounds;
    }
    cout << player1 << " vs " << player2 << " for " << rounds << " rounds\n";

    int player1Wins = 0, player2Wins = 0;
    for (int i = 0; i < rounds; ++i) {
        int player1Choice, player2Choice;
        do {
            player1Choice = rand() % 3;
            player2Choice = rand() % 3;
            if (player1Choice == player2Choice) {
                cout << "Tie\n";
            }
        } while (player1Choice == player2Choice);

        if ((player1Choice == ROCK && player2Choice == SCISSORS) ||
            (player1Choice == SCISSORS && player2Choice == PAPER) ||
            (player1Choice == PAPER && player2Choice == ROCK)) {
            cout << player1 << " wins with ";
            player1Wins++;
        } else {
            cout << player2 << " wins with ";
            player2Wins++;
        }

        switch (player1Choice == ROCK || player2Choice == ROCK ? ROCK :
                player1Choice == PAPER || player2Choice == PAPER ? PAPER : SCISSORS) {
            case ROCK: cout << "rock\n"; break;
            case PAPER: cout << "paper\n"; break;
            case SCISSORS: cout << "scissors\n"; break;
        }
    }

    cout << player1 << " wins " << player1Wins << " and " << player2 << " wins " << player2Wins << "\n";

    return 0;
}