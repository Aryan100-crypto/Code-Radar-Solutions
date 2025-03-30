#include<stdio.h>
void main(){
    int n,i,prime=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0 || arr[i]%3!=0 || arr[i]%5!=0 || arr[i]%7!=0){
            prime++;
        }
    }
    printf("%d",prime);

}