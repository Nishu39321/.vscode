#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
  int m;
  scanf("%d",&m);
  int arr[m-1];
  //long long int sum=0;
  for(int j=0;j<m-1;j++){
  scanf("%d",&arr[j]);
  }
  int j;
  for(j=0;j<m-1;j++){
    if(arr[j]!=j+1){
      printf("%d\n",j+1);
      break;
    }
  }
  if (j==m - 1) {
            printf("%d\n", m);
        }
}
    return 0;
}