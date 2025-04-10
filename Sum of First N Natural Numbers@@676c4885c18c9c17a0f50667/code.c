#include<stdio.h>
void main(){
    int n,i=1,sum;
    scanf("%d",&n);
    while(n<=i){
        sum+=i;
        i++;
    }
    printf("%d",sum);
}