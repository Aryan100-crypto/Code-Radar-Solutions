//t is used for column wise operation
#include<stdio.h>
void main(){
    int i,j,t,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(t=1;t<=n;t++){
            if(i==1 || i==n || t==1 || t==n){
                printf("*");
            }
            else{
                printf("");
            }
        }
        printf("\n");
    }
}
