#include<stdio.h>
#include<string.h>
void main(){
    int i,len=0,j;
    char str[35];

    scanf("%s",str);
    len=strlen(str);
    for(i=0;str[i]!='\0';i++){
        for(j=len-1;j>=0;j--){
            if(str[i]==str[j]){
                printf("Yes");
            }
            else{
                printf("No");
            }
        }

    }

}