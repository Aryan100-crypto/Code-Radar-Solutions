#include<stdio.h>
//strlen function is the part of string.h library
#include<string.h>
void main(){
    int p,i;
    char str[35];
    scanf("%s",str);

    p=strlen(str);
    
    for(i=p-1;i>=0;i--){
        printf("%c",str[i]);
        
        


    }


}
