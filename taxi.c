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
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
    int count=0;
    int rep=0;
    for(int i=0;i<n;i++){
      if(arr[i]==4){
        count++;
      }
      else{
        rep+=arr[i];
        count++;
        if(rep>4){
            rep=rep-arr[i];
            count--;
            rep=arr[i];
        }
      }
    }
    printf("%d",count);
}