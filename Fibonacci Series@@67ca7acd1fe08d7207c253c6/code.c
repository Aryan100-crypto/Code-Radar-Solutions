// Your code here...
#include<stdio.h>
int fib(int a);
int main(){
    int res;
    res=fib(int a);
    scanf("%d%d",&a,&res);
    printf("%d",&res);
    return 0;

}
int fib(int a){
    if(k>0){
        return a+fib(a-1);
    }
    else{
        return 0;
    }
}
