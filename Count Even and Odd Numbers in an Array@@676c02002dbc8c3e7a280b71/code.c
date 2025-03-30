// Your code here...
#include<stdio.h>
int n,arr[n],i,z=i%2,e=n-z;
scanf("%d",&n);
for(i=0;i<=n;i++){
    arr[i]=i;
}
if(i%2==0){
    printf("%d\t",z);
}
else{
    printf("%d",e);
}