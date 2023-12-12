#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    int i,count0,count1;
    int *arr=(int *)malloc(100*sizeof(int));
    for( i=0;i<100;i++){
        scanf("%d",&arr[i]);
          if(arr[i]!=0&&arr[i]!=1){
            break;
        }
        if(arr[i]==0){
            int j=i;
           while(j>=0&&arr[j]==0){
            j--;
           }
           if((i-j)>=7){
            count0++;
           }
        }
        if(arr[i]==1){
             int j=i;
           while(j>=0&&arr[j]==1){
            j--;
           }
           if((i-j)>=7){
            count1++;
           }
        }
    }
    free(arr);
     if(count0==1||count1==1){
        printf("YES");
        return 0;
     }

        printf("NO");
     
    return 0;
}