#include <stdio.h>

int main() {
    int N;
   // printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= i; k++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    return 0;
}