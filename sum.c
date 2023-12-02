#include<stdio.h>

int main() {

   int i,n,x,j;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   scanf("%d",&x);
   for(i=0;i<n;i++){
       if (x==arr[i]){
           j=i;
       }
   }
   int brr[n];
   for(i=0;i<n;i++){
   brr[i]=arr[i];
   }
  for(i=0;i<n;i++){
      if(j<=n-2){
       arr[i]=brr[j+1];
       j++;
      }
      else{
         int c=(j+1)%n;
        arr[i]=brr[c];
        j++;
      }
      }
 for(i=0;i<n;i++){
       printf("%d ",arr[i]);
    }

    return 0;
   }
