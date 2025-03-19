#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);

    // Loop for each row
    for (i = 1; i <= N; i++) {
        // Print spaces
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}