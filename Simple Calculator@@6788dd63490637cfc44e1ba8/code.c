#include <stdio.h>


int main() {
    int a,b,calculator;
    char sign;
    scanf("%d %d %c",&a,&b,&sign);
    switch(calculator){
        case ('+'):
        printf("%d",a+b);
        break;
        case ('-'):
        printf("%d",a-b);
        break;
        case ('*'):
        printf("%d",a*b);
        break;
        case ('/'):
        printf("%d",a/b);
        break;
        default:
        printf("error");
        break;
    
    }
    return 0;
}