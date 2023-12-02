#include<stdio.h>
int  transfer(int *a,int *b){
    int c;
    c=*b;
    *b=*b-5000;
    *a=*a+(c-*b);
return *a,*b;
}
int main(){
    int x,y;
   x=25000;
   y=10000;
printf("%d %d\n",x,y);
transfer(&x,&y);
printf("%d %d",x,y);
    return 0;
}