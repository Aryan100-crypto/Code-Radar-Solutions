#include <stdio.h>

void main() {
    int i, j, n;
    scanf("%d", &n);
    
    for (j = 1; j <= n; j++) {
        for (i = 1; i <= j; i++) {
            printf("* ");
        }
        printf("\n"); // Moved inside the outer loop
    }
}
