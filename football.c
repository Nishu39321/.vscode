#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
   char *a="ABC";
   char *b="BC";
   int x=strcmp(a,b);
   printf("%d",x);
     
    return 0;
}