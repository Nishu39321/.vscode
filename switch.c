#include<stdio.h>


int main() {

   int i,j,x,y;
   scanf("%d %d",&x,&y);
   int arr[x];
   for(i=0;i<x;i++){
       scanf("%d",&arr[i]);
   }
   int brr[y];
   for(i=0;i<y;i++){
       scanf("%d",&brr[i]);
   }
   for(i=0;i<x;i++){
      int count=0;
     for(j=0;j<y;j++){
         if(arr[i]==brr[j]){
             count++;
         if(count==1){
                 printf("%d ",arr[i]);
         }
             }
     }
    }
    return 0;
}
