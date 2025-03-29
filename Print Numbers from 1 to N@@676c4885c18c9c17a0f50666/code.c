#include <stdio.h>

int main() {
    int i = 1, n;
    
    // Taking input from the user
    printf("");
    scanf("%d", &n);
    
    // Printing the first n natural numbers
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    
    return 0;
}

