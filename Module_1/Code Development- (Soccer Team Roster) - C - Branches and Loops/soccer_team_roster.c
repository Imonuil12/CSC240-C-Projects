#include <stdio.h>

// Function to display the menu options
void showMenu() {
    printf("\nMENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");
    printf("\nChoose an option:\n");
}

// Function to display the roster of players with their jersey numbers and ratings
void displayRoster(int jerseys[], int ratings[]) {
    printf("\nROSTER\n");
    for (int i = 0; i < 5; i++) {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, jerseys[i], ratings[i]);
    }
}

// Function to modify the rating of a player based on their jersey number
void modifyPlayerRating(int jerseys[], int ratings[]) {
    int jerseyNumber, newRating;
    printf("Enter a jersey number: ");
    scanf("%d", &jerseyNumber); // Read the jersey number to be updated
    for (int i = 0; i < 5; i++) {
        if (jerseys[i] == jerseyNumber) { // Find the player with the given jersey number
            printf("Enter a new rating for player: ");
            scanf("%d", &newRating); // Read the new rating
            ratings[i] = newRating; // Update the player's rating
            break;
        }
    }
}

// Function to list players with ratings above a specified threshold
void listPlayersAboveRating(int jerseys[], int ratings[]) {
    int ratingThreshold;
    printf("Enter a rating: ");
    scanf("%d", &ratingThreshold); // Read the rating threshold
    printf("\nABOVE %d\n", ratingThreshold);
    for (int i = 0; i < 5; i++) {
        if (ratings[i] > ratingThreshold) { // Check if the player's rating is above the threshold
            printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, jerseys[i], ratings[i]);
        }
    }
}

// Function to replace a player in the roster
void replacePlayerInRoster(int jerseys[], int ratings[]) {
    int oldJerseyNumber, newJerseyNumber, newRating;
    printf("Enter a jersey number: ");
    scanf("%d", &oldJerseyNumber); // Read the jersey number to be replaced
    for (int i = 0; i < 5; i++) {
        if (jerseys[i] == oldJerseyNumber) { // Find the player with the given jersey number
            printf("Enter a new jersey number: ");
            scanf("%d", &newJerseyNumber); // Read the new jersey number
            printf("Enter a rating for the new player: ");
            scanf("%d", &newRating); // Read the new rating
            jerseys[i] = newJerseyNumber; // Update the player's jersey number
            ratings[i] = newRating; // Update the player's rating
            break;
        }
    }
}

int main() {
    int playerJerseys[5]; // Array to store jersey numbers of players
    int playerRatings[5]; // Array to store ratings of players
    char choice;

    // Input the jersey number and rating for each player
    for (int i = 0; i < 5; i++) {
        printf("Enter player %d's jersey number: ", i + 1);
        scanf("%d", &playerJerseys[i]);
        printf("Enter player %d's rating: ", i + 1);
        scanf("%d", &playerRatings[i]);
    }

    displayRoster(playerJerseys, playerRatings); // Display the initial roster
    showMenu(); // Show the menu options

    scanf(" %c", &choice); // Read the user's choice
    while (choice != 'q') { // Continue until the user chooses to quit
        switch (choice) {
            case 'u': // Update player rating
                modifyPlayerRating(playerJerseys, playerRatings);
                break;
            case 'a': // List players above a rating
                listPlayersAboveRating(playerJerseys, playerRatings);
                break;
            case 'r': // Replace a player in the roster
                replacePlayerInRoster(playerJerseys, playerRatings);
                break;
            case 'o': // Output the current roster
                displayRoster(playerJerseys, playerRatings);
                break;
            default: // Handle invalid menu choices
                printf("Invalid option, please try again.\n");
        }

        showMenu(); // Show the menu again after each operation
        scanf(" %c", &choice); // Read the next user's choice
    }

    return 0; // End of the program
}
