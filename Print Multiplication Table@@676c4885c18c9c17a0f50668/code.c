// Your code here...
#include <stdio.h>

void main() {
    int N, j;
    
    // Read input from the user
    scanf("%d", &N);
    
    // Loop to print the multiplication table
    for (j = 1; j <= 10; j++) {
        printf("%d  %d = %d\n", N, j, N * j);
    }

    
}
