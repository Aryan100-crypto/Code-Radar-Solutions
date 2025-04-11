#include<stdio.h>
#include<string.h>
void main(){
    int i=0,len,j=0,lenn,count=0;
    char str="aeiou";


    char strr[35];
    
    scanf("%s",strr);
    len=strlen(strr);
    lenn=strlen(str);
    for(i<=len+1;i>=0;i++){
        for(j<=lenn+1;j>=0;j++){
            while(str[i]!=str[j]){
                count++;
                
                
            }
        }
        


    }
    printf("%d",count);
}
    