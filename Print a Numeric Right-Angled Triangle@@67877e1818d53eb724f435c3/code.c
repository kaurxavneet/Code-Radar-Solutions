#include <stdio.h>

int main() {
    int N;
   // printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // Print numbers from 1 to the row number
        }
        printf("\n");
    }
    return 0;
}