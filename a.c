#include<stdio.h>
#include<string.h>
int func(int k,int n,int arr[n]){
   long long int a,b;
   for(int i=n;i<=k;i++){
      int m=1;
      for(int j=1;j<=i;j++){
         m*=10;
      }
      a+=arr[i]*m;
   }
    for(int i=k+1;i<8;i++){
      int m=1;
      for(int j=1;j<=i-k-1;j++){
         m*=10;
      }
      b+=arr[i]*m;
   }
   if(a<b){
      printf("%d %d",a,b);
   return 1;
   }
   else{
      return 0;
   }
}
void swap(long long int *a,long long int *b){
   long long int temp=*b;
   *b=*a;
   *a=temp;
} 
int main(){
   int t;
   scanf("%d",&t);
  for(int I=0;I<t;I++){
  long long int n;
  scanf("%lli",&n);
  int j=7,k;
  int y;
  int arr[8];
  while(n>0){
   arr[j]=n%10;
   n/=10;
   j--;
  }
  for(k=j+1;k<8;k++){
   if(arr[k]==0&&arr[k+1]!=0){
      if(func(k,j+1,arr)==1){
         break;
      }
   }
   if(arr[k]!=0&&arr[k+1]!=0){
      if(func(k,j+1,arr)==1){
         printf("\n");
         break;
      }
   }
  }
  if(k==8){
   printf("-1\n");
  }
  }
    return 0;
}