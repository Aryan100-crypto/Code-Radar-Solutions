#include<stdio.h>
void main() {
    int n, i, odd = 0, even = 0;

    // Input for 'n'
    printf("");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Corrected loop for initializing the array
    for (i = 0; i < n; i++) { // Use i < n to avoid out-of-bounds access
        arr[i] = i;
    }

    // Loop to count odd and even numbers
    for (i = 0; i < n; i++) { // Use i < n for iteration
        if (arr[i] % 2 == 0) {
            even++; // Increment even count
        } else {
            odd++; // Increment odd count
        }
    }

    // Print results outside the loop
    printf("%d ", odd);
    printf("%d", even);
}