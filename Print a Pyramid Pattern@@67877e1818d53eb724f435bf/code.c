#include<stdio.h>
void main(){
    int i,j,n,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(t=1;t<=n-i;t++){
            printf(" ");}

            for(j=1;j<=(2*i-1);j++){
                printf("*");
            }

        
        printf("\n");
    }
}