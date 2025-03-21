// Your code here...
#include<stdio.h>
void main(){
    int i,j,t,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(t=1;t<=n-1;t++){
            if(t==0 || t==n){
                printf("*");
            }
            else{
                printf("");
            }
            }

            for(j=1;j<=n;j++){
                printf("*");
            }
        
        printf("\n");
    
}
}