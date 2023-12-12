#include<stdio.h>
void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }
    int i,j;
    int req=0;
    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            swap(&arr[i],&arr[j]);
        }
       }
    }
    int count=0;
    for(i=0;i<n;i++){
        req+=arr[i];
        if(req>sum/2){
            printf("%d",i+1);
            return 0;
        }
    }
    return 0;
}