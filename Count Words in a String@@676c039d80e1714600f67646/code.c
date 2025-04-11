#include<stdio.h>
#include<string.h>
void main(){
    int i,count=0;
    char str[35];
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}