#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    scanf("%d",&n);
    while(n<=i){
        sum+=i;
        i++;
    }
    printf("%d",sum);
}