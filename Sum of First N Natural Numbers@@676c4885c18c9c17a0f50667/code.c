#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("%d",sum);
}