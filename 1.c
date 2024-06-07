#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 50 to 70:\n");
    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers between 50 to 70:\n");
    for (i = 50; i <= 70; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}