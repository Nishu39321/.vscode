#include<stdio.h>
float avg(int arr[],int n){
int p,sum=0;
p=*arr;
for(int i=0;i<n;i++){
sum =sum +*(p+i);
}
return ((float)sum/n);
}


int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("%d",avg(&arr,n));
return 0;
}