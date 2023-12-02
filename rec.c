#include<stdio.h>
#include<math.h>
int sum(int x){
    int req=0;
    int n;
    if(x<10){
        return x;
    }
    if(x>=10){

n=x%10;
    
req=n+sum(x/10);
    }
    return req;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",sum(x));

    return 0;
}