#include<stdio.h>

int main(){
   /* int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    if(m*a>=b){
    printf("%d",((n/m)*b)+((n%m)*a));
    return 0;
    }
    else{
      printf("%d",m*a);
    }
    */
   int n,a,b;
   scanf("%d %d %d",&n,&a,&b);
   int rem=(6*n)-(a*b);
   if(rem<=0){
      printf("%d \n%d %d",a*b,a,b);
   }
   else{
      int x,y;
      if(a<=6&&b<=n){
      x=6;
      y=n;
      }
      else if(b<=6&&a<=n){
         y=6;
         x=n;
      }
      else{
         for(int i=a+1;i<6*n;i++){
           if((6*n)%i==0){
             x=i;
             y=(6*n)/i;
           }
         }
      }
            printf("%d \n%d %d",6*n,x,y);
   }
    return 0;
}