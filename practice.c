#include<stdio.h>
long long int power(int a,int n){
     if(n==1){
      return a;
    }
        if(n%2==0){

        return (power(a,n/2))*(power(a,n/2));
        }
     
    if(n%2!=0){
       return (power(a,(n-1)/2))*(power(a,(n-1)/2))*a;
      
    }

}
int main() {

int a,n;
scanf("%d %d",&a,&n);
printf("%lli",power(a,n));

    return 0;
}