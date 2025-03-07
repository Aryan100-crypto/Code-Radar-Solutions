// Your code here...
#include<stdio.h>
int fib(int a);
int main(){
    int a,res;
    
    scanf("%d",&a);
    res=fib(a);
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
