
// DynamicMemory.c
// Program to understand dynamic memory allocation in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *myPtr = NULL;

    printf("myPtr: %p\n", (void *)myPtr);
    // Next line would cause error because myPtr is null
    // printf("myPtr: %d\n", *myPtr); // ERROR

    // sizeof returns number of bytes for type
    // malloc allocates specified number of bytes
    // cast void pointer to the desired pointer type
    myPtr = (int *)malloc(sizeof(int));
    printf("myPtr: %p\n", myPtr);

    *myPtr = 555;
    printf("myPtr: %d\n", *myPtr);

    // Deallocate memory
    free(myPtr);

    // Dynamically allocated copy of string
    char nameArr[50]; // User specified name
    char *nameCopy = NULL; // Output greeting and name

    // Prompt user to enter a name
    printf("Enter name: ");
    fgets(nameArr, 50, stdin);
    // scanf("%s", nameArr); // https://cplusplus.com/reference/cstdio/

    // Create dynamically allocated copy of name
    // +1 is for the null character
    nameCopy = (char *)malloc((strlen(nameArr) + 1) * sizeof(char));
    strcpy(nameCopy, nameArr);

    // Output greeting and name
    printf("Hello %s", nameCopy);

    // Deallocate memory
    free(nameCopy);

    return 0;
}
