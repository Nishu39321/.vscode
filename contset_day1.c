#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
int q;
scanf("%d",&q);
long long int no=0;
while(q>0){
    no=no+5;
    for(int i=no;i>=1;i--){
        long long int m=pow(5,i);
        if(no%m==0){
            q=q-i;
            break;
        }
    }
}
if(q!=0){
    printf("No solution");
    return 0;
}
printf("%lli",no);

    return 0;
}