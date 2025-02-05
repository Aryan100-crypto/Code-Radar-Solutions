#include <stdio.h>


int main() {
    int a,b;
    char calculator;
    scanf("%d%d",&a,&b);
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