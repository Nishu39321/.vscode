#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   int arr[n][2];
   for(int i=0;i<n;i++){
   scanf("%d+%d",&arr[i][0],&arr[i][1]);
   }
   for(int i=0;i<n;i++){
    printf("%d\n",arr[i][0]+arr[i][1]);
   }
    return 0;
}