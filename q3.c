#include<stdio.h>
#include<string.h>
int main() {
    int n=100,m=0,j=0;
char string_input[20];
scanf("%s",string_input);
FILE *ptr;
ptr=fopen(string_input,"r");
char content[100];
char copy[n];
char copy2[10];
if(ptr==NULL){
    printf("couldn't open file");
}
else{
    while(fscanf(ptr,"%s",content)!=EOF){
       printf("%s\n",content);
        n=strlen(content);
        if(m>1){
            j=0;
        for(int i=0;i<n;i++){
            if(copy[i]==content[i]){
                copy2[j]=copy[i];
                j++;
            }
        }
        }
        for(int i=0;i<n;i++){
            copy[i]=content[i];
        }
        
    }
    fclose(ptr);
}
for(int i=0;i<j-2;i++){
  //  printf("%c",copy2[i]);
}

    return 0;
}