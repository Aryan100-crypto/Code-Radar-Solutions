#include <stdio.h>

void main() {
    int i, j, t, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Loop to print the hollow rectangle
        for (t = 1; t <= n; t++) {
            if (i == 1 || i == n || t == 1 || t == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
