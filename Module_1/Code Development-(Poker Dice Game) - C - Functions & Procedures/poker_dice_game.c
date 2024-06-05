#include <stdio.h>

// Add all occurrences of goal value
int CheckSingles(int dice[], int goal) {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        if (dice[i] == goal) {
            sum += goal;
        }
    }
    return sum;
}

// Check for three of a kind (score = 30)
int CheckThreeOfKind(int dice[]) {
    for (int i = 0; i < 3; ++i) {
        if (dice[i] == dice[i+1] && dice[i+1] == dice[i+2]) {
            return 30;
        }
    }
    return 0;
}

// Check for four of a kind (score = 40)
int CheckFourOfKind(int dice[]) {
    for (int i = 0; i < 2; ++i) {
        if (dice[i] == dice[i+1] && dice[i+1] == dice[i+2] && dice[i+2] == dice[i+3]) {
            return 40;
        }
    }
    return 0;
}

// Check for five of a kind (score = 50)
int CheckFiveOfKind(int dice[]) {
    if (dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3] && dice[3] == dice[4]) {
        return 50;
    }
    return 0;
}

// Check for full house (score = 35)
int CheckFullHouse(int dice[]) {
    if ((dice[0] == dice[1] && dice[2] == dice[3] && dice[3] == dice[4] && dice[0] != dice[2]) ||
        (dice[0] == dice[1] && dice[1] == dice[2] && dice[3] == dice[4] && dice[2] != dice[3])) {
        return 35;
    }
    return 0;
}

// Check for straight (score = 45)
int CheckStraight(int dice[]) {
    if ((dice[0] == 1 && dice[1] == 2 && dice[2] == 3 && dice[3] == 4 && dice[4] == 5) ||
        (dice[0] == 2 && dice[1] == 3 && dice[2] == 4 && dice[3] == 5 && dice[4] == 6)) {
        return 45;
    }
    return 0;
}

// Find high score
int FindHighScore(int dice[]) {
    int highScore = 0;
    int score;
    
    // Check singles
    for (int i = 1; i <= 6; ++i) {
        score = CheckSingles(dice, i);
        if (score > highScore) {
            highScore = score;
        }
    }
    
    // Check other categories
    score = CheckThreeOfKind(dice);
    if (score > highScore) {
        highScore = score;
    }
    
    score = CheckFourOfKind(dice);
    if (score > highScore) {
        highScore = score;
    }
    
    score = CheckFiveOfKind(dice);
    if (score > highScore) {
        highScore = score;
    }
    
    score = CheckFullHouse(dice);
    if (score > highScore) {
        highScore = score;
    }
    
    score = CheckStraight(dice);
    if (score > highScore) {
        highScore = score;
    }
    
    return highScore;
}

int main(void) {
    int diceValues[5];
    int highScore = 0;

    // Fill array with five values from input in ascending order
    for(int i = 0; i < 5; ++i) {
        scanf("%d", &diceValues[i]);
    }

    // Find high score and output
    highScore = FindHighScore(diceValues);
    printf("High score: %d\n", highScore);
}
