#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showMenu() {
    cout << "\nMENU\n";
    cout << "u - Update player rating\n";
    cout << "a - Output players above a rating\n";
    cout << "r - Replace player\n";
    cout << "o - Output roster\n";
    cout << "q - Quit\n";
    cout << "\nChoose an option:\n";
}

void displayRoster(const vector<int>& jerseys, const vector<int>& ratings) {
    cout << "\nROSTER\n";
    for (int i = 0; i < 5; i++) {
        cout << "Player " << i + 1 << " -- Jersey number: " << jerseys[i] << ", Rating: " << ratings[i] << endl;
    }
}

void modifyPlayerRating(vector<int>& jerseys, vector<int>& ratings) {
    int jerseyNumber, newRating;
    cout << "Enter a jersey number: ";
    cin >> jerseyNumber;
    for (int i = 0; i < 5; i++) {
        if (jerseys[i] == jerseyNumber) {
            cout << "Enter a new rating for player: ";
            cin >> newRating;
            ratings[i] = newRating;
            break;
        }
    }
}

void listPlayersAboveRating(const vector<int>& jerseys, const vector<int>& ratings) {
    int ratingThreshold;
    cout << "Enter a rating: ";
    cin >> ratingThreshold;
    cout << "\nABOVE " << ratingThreshold << "\n";
    for (int i = 0; i < 5; i++) {
        if (ratings[i] > ratingThreshold) {
            cout << "Player " << i + 1 << " -- Jersey number: " << jerseys[i] << ", Rating: " << ratings[i] << endl;
        }
    }
}

void replacePlayerInRoster(vector<int>& jerseys, vector<int>& ratings) {
    int oldJerseyNumber, newJerseyNumber, newRating;
    cout << "Enter a jersey number: ";
    cin >> oldJerseyNumber;
    for (int i = 0; i < 5; i++) {
        if (jerseys[i] == oldJerseyNumber) {
            cout << "Enter a new jersey number: ";
            cin >> newJerseyNumber;
            cout << "Enter a rating for the new player: ";
            cin >> newRating;
            jerseys[i] = newJerseyNumber;
            ratings[i] = newRating;
            break;
        }
    }
}

int main() {
    vector<int> playerJerseys(5);
    vector<int> playerRatings(5);
    char choice;

    for (int i = 0; i < 5; i++) {
        cout << "Enter player " << i + 1 << "'s jersey number: ";
        cin >> playerJerseys[i];
        cout << "Enter player " << i + 1 << "'s rating: ";
        cin >> playerRatings[i];
    }

    displayRoster(playerJerseys, playerRatings);
    showMenu();

    cin >> choice;
    while (choice != 'q') {
        switch (choice) {
            case 'u':
                modifyPlayerRating(playerJerseys, playerRatings);
                break;
            case 'a':
                listPlayersAboveRating(playerJerseys, playerRatings);
                break;
            case 'r':
                replacePlayerInRoster(playerJerseys, playerRatings);
                break;
            case 'o':
                displayRoster(playerJerseys, playerRatings);
                break;
            default:
                cout << "Invalid option, please try again.\n";
        }

        showMenu();
        cin >> choice;
    }

    return 0;
}
