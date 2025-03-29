#include<stdio.h>
void main(){
    int i=1,n;
    scanf("%d",&n);
    if(i<1){
        printf(" ");
    }
    else{do{
        printf("%d ",i);
        i++;
    }while(i<=n);
}
}