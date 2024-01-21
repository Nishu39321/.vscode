#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
long long int n;
scanf("%lli",&n);
long long int arr[n];
for(long long int i=0;i<n;i++){
  long long int x,y,z;
  scanf("%lli %lli %lli",&x,&y,&z);
  long long int time=0;
  
 /*while(x>0){
    x=x-y;
    time+=z;
  }
  printf("%lli\n",time-z);*/
long long int k=x/y;
 arr[i]=k*z;
  }
 for(long long int i=0;i<n;i++){
 printf("%lli\n",arr[i]);
 }
    return 0;
}