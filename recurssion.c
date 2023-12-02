#include<stdio.h>
#include<string.h>
void concatenation(char *str1,char *str2,char *str3){
    while(*str1!='\n'){
        *str3=*str1;
        str1++;
        str3++;
    }
   *str3++=' ';
  while(*str2!='\n'){
        *str3=*str2;
        str2++;
        str3++;
    }
    *str3='\0';
}
int main() {
char str1[100],str2[100],str3[100];
fgets(str1,100,stdin);
fgets(str2,100,stdin);
concatenation(str1,str2,str3);
printf("%s",str1);
printf("%s",str2);
printf("%s",str3);
return 0;
}

