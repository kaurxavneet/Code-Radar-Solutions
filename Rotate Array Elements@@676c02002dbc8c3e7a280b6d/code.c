#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int arr[], int n, int k) {
    // Ensure k is within the bounds of the array size
    k = k % n; 
    if (k < 0) k += n; // Handle negative k

    // Reverse the entire array
    reverse(arr, 0, n - 1);
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;

    // Input size of array
    printf("Enter the size of the array (N): ");
    scanf("%d", &n);
    
    int arr[n];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    printf("Enter the number of positions to rotate (K): ");
    scanf("%d", &k);

    // Rotate the array
    rotate(arr, n, k);

    // Print the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}