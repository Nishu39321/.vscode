#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
int n;
scanf("%d",&n);
struct input{
  char A[20];
  char B[9];
  char C[13];
  int life_A,life_B,life_C;
};
for(int i=0;i<n;i++){
 struct input nis;
 scanf("%s",nis.A);
 scanf("%d",&nis.life_A);
  scanf("%s",nis.B);
 scanf("%d",&nis.life_B);
  scanf("%s",nis.C);
 scanf("%d",&nis.life_C);
 if(nis.life_A>=nis.life_B||nis.life_A>=nis.life_C){
  printf("YES\n");
  continue;
 }
  if(nis.life_C<=nis.life_B||nis.life_C<=nis.life_A){
  printf("YES\n");
  continue;
 }
 printf("NO\n");
}
    return 0;
}