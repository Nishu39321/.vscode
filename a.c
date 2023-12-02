#include<stdio.h>
int main(){
    int i,j;
    scanf("%d%d",&i,&j);
    int arr[i][j];
    printf("for matrix 1:\n");
    for(int k=0;k<i;k++){
        printf("write elements of row %d :",k+1);
        for(int l=0;l<j;l++){
            scanf("%d",&arr[k][l]);
        }
    }
    int ar2[i][j];
     printf("for matrix 2:\n");
    for(int k=0;k<i;k++){
        printf("write elements of row %d :",k+1);
        for(int l=0;l<j;l++){
            scanf("%d",&ar2[k][l]);
        }
    }
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
               printf("%d ",arr[k][l]+ar2[k][l]);
        }
         printf("\n");
    }
    return 0;
}