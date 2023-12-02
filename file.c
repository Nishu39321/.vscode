#include<stdio.h>
#include<string.h>
int main() {
int count=0,m=0;
char file_name[20];
char pc;
scanf("%s",file_name);
FILE *ptr=fopen(file_name,"r");
char text;
if(ptr==NULL){
    printf("couldn't open file");
}
else{
    do{
        text=fgetc(ptr);
        m++;
    /*if(text=='\n'){
        m--;
    }*/
    if(text==' '||text=='\n'||text=='\t'||text=='.'||text==EOF){
        if(pc!=' '&&pc!='\n'&&pc!='\t'&&pc!='.'){
        count++;
    }
    }
    pc=text;
    }
   while(text!=EOF);{
       m++;
   };
     
fclose(ptr);
printf("%d %d",m,count);
}

   return 0;
}
