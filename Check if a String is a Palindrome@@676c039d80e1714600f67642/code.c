#include<stdio.h>
#include<string.h>
void main(){
    int i,j,ispal=1,len;
    char str[35];
    scanf("%s",str);
    len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--){
        if(str[i]=str[j]){
            ispal=0;
            break;
        }
        

    }
    if(ispal){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
