
    #include <stdio.h>
#include <string.h>

void main() {
    int i = 0, j = 0, lenn = 0, count = 0;
    char str[] = "aeiou";      // Vowels list
    char strr[35];             // Input string

    scanf("%s", strr);         // Read input string
    lenn = strlen(strr);       // Length of input string

    for (i = 0; i < lenn; i++) {              // Loop through input string
        for (j = 0; j < 5; j++) {             // Loop through vowel list
            if (strr[i] == str[j]) {          // If character matches a vowel
                count++;
                break;                        // Avoid double counting
            }
        }
    }

    printf("%d", count);                      // Output total vowel count
}
