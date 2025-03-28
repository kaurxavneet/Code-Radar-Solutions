#include <stdio.h>
int main() {
    int N;
   // printf("Enter the number of rows for the top half of the diamond: ");
    scanf("%d", &N);
   // Top half of the diamond
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    // Bottom half of the diamond
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    return 0;
}