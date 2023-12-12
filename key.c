#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n][1000];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<strlen(str[i]);j++){
            if(str[i][j]=='b'){
                str[i][j]='*';
                for(int k=j;k>=0;k--){
                 if(str[i][k]>=97&&str[i][k]<=122){
                    str[i][k]='*';
                  break;
                 }
                }
            }
            else if(str[i][j]=='B'){
                str[i][j]='*';
                for(int k=j;k>=0;k--){
                 if(str[i][k]>=65&&str[i][k]<=90){
                    str[i][k]='*';
                    break;
                 }
                }
            }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<strlen(str[i]);j++){
            if(str[i][j]!='*'){
                printf("%c",str[i][j]);
            }
        }
        printf("\n");
     }
     return 0;
}