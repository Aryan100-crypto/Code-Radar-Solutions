// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%d",&a);
    if(isupper(a)){
        printf("Uppercase",a);
    }
    else{
        printf("Lowercase",a);
    }
    return 0;
}