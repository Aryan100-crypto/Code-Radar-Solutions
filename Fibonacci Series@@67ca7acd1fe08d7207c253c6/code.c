#include<stdio.h>
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return (n-1)+(n-2);
    }
}
void main(){
    int num;
    scanf("%d",&num);
    printf("%d",fib(num));
}
