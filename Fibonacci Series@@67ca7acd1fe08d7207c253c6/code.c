#include<stdio.h>

int fib(int n){

    if(n==1 || n==2 ){
            return n;
    }

    else{
            return n+fib(n-1);
    }

    }
void main(){
    int num;
    printf("%d",fib(num));
}


