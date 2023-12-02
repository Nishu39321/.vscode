#include<stdio.h>
#include<string.h>
struct currency{
    char name[4];
    float value;
};
struct finding{
    float amount;
    char from[4];
    char to[4];
};
int main() {
 int  count=0;  
char file_name[20];
scanf("%s",file_name);
FILE *ptr=fopen(file_name,"r");
char text[1000];
if(ptr==NULL){
    printf("couldn't open file");
}
else{
    int m,n;
    fscanf(ptr,"%d %d",&m,&n);
    struct currency info[m];
    for(int i=0;i<m;i++){
        fscanf(ptr,"%s %f",info[i].name,&info[i].value);
    }
    struct finding input[n];
    for(int i=0;i<n;i++){
    fscanf(ptr,"%f %s %s",&input[i].amount,input[i].from,input[i].to);
    }
     fclose(ptr);
    float arr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<m;k++){
        if(strcmp(input[i].from,info[j].name)==0&&strcmp(input[i].to,info[k].name)==0){
            arr[i]=(input[i].amount*info[j].value)/info[k].value;
            break;
        }
    }
    }
    }
    for(int i=0;i<n;i++){
        printf("%.2f\n",arr[i]);
    }
}
    return 0;
}
