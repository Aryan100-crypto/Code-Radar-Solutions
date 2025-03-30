#include<stdio.h>
void main(){
    int n,i,odd,even;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }

    }
    printf("%d %d",odd,even);
}
