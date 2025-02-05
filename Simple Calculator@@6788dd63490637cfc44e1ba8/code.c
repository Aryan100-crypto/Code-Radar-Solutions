#include <stdio.h>


int main() {
    int a,b,calculator;
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
    
    }
    return 0;
}