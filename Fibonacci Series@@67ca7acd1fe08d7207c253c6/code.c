#include<stdio.h>

int fib(int n){

    if(n<=1){
            return n;
    }

    else{
            return n+fib(n-1);
    }

    }
void main(){
    int num;
    scanf("%d",&num);
    for(i=0;i<=n;i++){
        printf("%d",fib(i));
    }
}


