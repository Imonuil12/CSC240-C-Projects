#include <stdio.h>
#include <string.h>

#define INPUT_STR_SIZE 50 // Input string size

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char* modString) {
    int i; // Loop index

    for (i = 0; i < strlen(modString); ++i) {
        if (modString[i] == ' ') {
            modString[i] = '-';
        }
    }
}

int main(void) {
    char userStr[INPUT_STR_SIZE];  // Input string from user

    // Prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    // Remove the newline character at the end if present
    size_t len = strlen(userStr);
    if (len > 0 && userStr[len - 1] == '\n') {
        userStr[len - 1] = '\0';
    }

    // Call function to modify user-defined string
    StrSpaceToHyphen(userStr);

    printf("String with hyphens: %s\n", userStr);

    return 0;
}
