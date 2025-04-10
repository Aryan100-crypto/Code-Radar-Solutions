#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

void main() {
    int num, i;
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("%d ", fib(i));
    }
}



