// Your code here...
#include<stdio.h>
int fib(int a);
int main(){
    int a,res;
    res=fib(a);
    scanf("%d",&a);
    printf("%d",&res);
    return 0;

}
int fib(int a){
    if(a>0){
        return a+fib(a-1);
    }
    else{
        return 0;
    }
}
