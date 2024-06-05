
// Read elements continuously until a negative integer (sentinel)
#include <stdio.h>

int main() {
    int *pa, currValue, i;
    int a[10], x; // notice that we do NOT use NEW keyword for arrays

    pa = a; // same as pa = &a[0];
    x = a[5];
    x = *(pa + 5); // different from x = *(pa + 5);

    scanf("%d", &currValue);
    i = 0;
    while ((currValue > 0) && (i < 10)) {
        a[i] = currValue;
        scanf("%d", &currValue);
        i = i + 1;
    }

    if (currValue > 0) { // Too many inputs. Didn't read in negative value.
        printf("Too many numbers\n");
    } else {
        printf("Middle item: %d\n", a[i/2]);
        // printf("Middle item: %d\n", *(pa + (i/2)));
    }

    return 0;
}
