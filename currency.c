#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
  long long int x;
  scanf("%lli",&x);
    float an=log(x)/log(2.0);
    int ans=log(x)/log(2.0);
    if(pow(2,an)==x){
      printf("1\n");
    }
    else{
      int y;
      if(an-ans<=0.5){
       // printf("%d",ans);
        y=ans;
      }
      else{
    //printf("%d",ans+1);
    y=ans+1;
      }
      if(y%2==0&&y>20){
        printf("%d",y/2);
      }
      else{
        printf("%d",y);
      }
    }
    return 0;
}