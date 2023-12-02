#include <stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%s",str);
    int n=strlen(str);
    char *ptr=str;
    for(int i=n;i>=0;i--){
        printf("%c",*(ptr+i));
    }
    return 0;
}
