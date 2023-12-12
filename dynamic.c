#include<stdio.h>
#include<string.h>
struct input{
    char str[3][3];
};
int main(){
   int n,t=0;
   scanf("%d",&n);
   struct input arr[n];
   char word[n][3];
   for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        word[i][j]='*';
    }
   }
   for(int i=0;i<n;i++){
    t=0;
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
             scanf("%c",&arr[i].str[i][j]);
             if(arr[i].str[j][k]!='.'){
                word[i][t]=arr[i].str[j][k];
                t++;
             }
        }
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        if(word[i][j]!='*'){
        printf("%c",word[i][j]);
        }
    }
    printf("\n");
   }
    return 0;
}