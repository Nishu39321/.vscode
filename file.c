#include<stdio.h>
#include<stdlib.h>
int func(int n,long long int arr[n][2]){
   for(int i=0;i<n;i++){
      if(arr[i][0]!=arr[i][1]){
         return 0;
      }
   }
   return 1;
}
void swap(long long int *a,long long int *b){
   long long int temp=*b;
   *b=*a;
   *a=temp;
} 
int partition(long long int arr[][2], int low, int high) {
    long long int pivot = arr[high][1];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j][1] >= pivot) {
            i++;
            swap(&arr[i][0], &arr[j][0]);
            swap(&arr[i][1], &arr[j][1]);
        }
    }

    swap(&arr[i + 1][0], &arr[high][0]);
    swap(&arr[i + 1][1], &arr[high][1]);

    return i + 1;
}

void quicksort(long long int arr[][2], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}
int main(){
   int t;
   scanf("%d",&t);
  for(int I=0;I<t;I++){
   int n;
   scanf("%d",&n);
   long long int (*arr)[2] = malloc(n * sizeof(long long int[2]));
   for(int i=0;i<n;i++){
      for(int j=0;j<2;j++){
         scanf("%lli",&arr[i][j]);
      }
   }
  long long int greetings=0;
   //quicksort(arr, 0, n - 1);
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
       if(arr[i][0]>arr[j][1]||i==j||arr[i][1]<arr[j][1]){
         continue;
       }
       else{
         if(arr[j][1]-arr[i][0]>arr[j][1]-arr[j][0]){
            greetings++;
         }
       }
      }
   }
   printf("%d\n",greetings);
   free(arr);
  }
    return 0;
}