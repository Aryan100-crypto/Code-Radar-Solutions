#include <stdio.h>
#include <string.h>

void main() {
    int i, j, len = 0, isPalindrome = 1;
    char str[35];

    scanf("%s", str);
    len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("Yes");
    else
        printf("No");
}


}