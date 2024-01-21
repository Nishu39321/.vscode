#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        long long int arr[2][n];
        for(i=0;i<2;i++){
            for(int j=0;j<n;j++){
            scanf("%lli ",&arr[i][j]);
        }
        }
        long long int brr[n];
        for(i=0;i<n;i++){
            int death=0;
            for(int j=1;j<n-1;j++){
                int k=j;
                if(arr[0][j]!=0){
                    if(arr[0][k-1]==0){
                        while(arr[0][k-1]!=0&&k>=1){
                            k--;
                        }
                    }
                     if(arr[0][k+1]==0){
                        while(arr[0][k+1]!=0&&k<n-1){
                            k++;
                        }
                    }
                   
                    brr[j]=arr[1][j]-(arr[0][k-1]+arr[0][k+1]);
                }
            }
            int b=1;
            if(arr[0][0]!=0){
            if(arr[0][b]==0){
                while(arr[0][b]!=0){
                    b++;
                 //  printf("dfg\n");
                }
            }
           brr[0]=arr[1][0]-arr[0][b];
            
            }
            if(arr[0][n-1]!=0){
            b=n-2;
             if(arr[0][b]==0){
                while(arr[0][b]!=0){
                    b--;
                }
            }
            
            brr[n-1]=arr[1][n-1]-arr[0][b];
            }
            for(int y=0;y<n;y++){
               printf("%lli\n",brr[y]);
                if(arr[0][y]!=0){
                if(brr[y]<0){
                    arr[0][y]=0;
                    death++;
                }
                }
            }
            printf("%d ",death);
            if(death==0){
                while (i<n-1)
                {
                 printf("0 ");
                 i++;
                }
            }
        }
            printf("\n");
    }
    return 0;
}