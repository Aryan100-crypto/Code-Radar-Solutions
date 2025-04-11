#include<stdio.h>
void main(){
    int i,len=0;
    char str[35];
    scanf("%s",str);
    while(i%2==0){
        len++;
    }
    printf("%d",len);
}