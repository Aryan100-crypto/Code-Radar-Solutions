#include<stdio.h>
void main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
