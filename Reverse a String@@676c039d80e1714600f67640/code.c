#include<stdio.h>
#include<string.h>
void main(){
    char str[35];
    int i,len;
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        printf("%c",str);
    }

}
