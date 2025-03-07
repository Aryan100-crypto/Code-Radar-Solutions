#include<stdio.h>

int fib(int a);

int main() {
    int a, res;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    res = fib(a);
    printf("Fibonacci of %d is: %d\n", a, res);
    
    return 0;
}

int fib(int a) {
    if (a == 0) {
        return 0; // Base case 1
    } else if (a == 1) {
        return 1; // Base case 2
    } else {
        return fib(a - 1) + fib(a - 2); // Recursive case
    }
}
