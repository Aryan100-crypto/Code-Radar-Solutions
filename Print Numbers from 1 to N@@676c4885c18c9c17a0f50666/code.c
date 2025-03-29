

#include <stdio.h>

void main() { 
    int i = 1, n; 
    scanf("%d", &n); 
    
    if (i < 1) {  // This condition is always false, but keeping it as per your request
        printf(" ");
    } else {  
        do {  
            printf("%d ", i); 
            i++; 
        } while (i <= n); 
    }
}
