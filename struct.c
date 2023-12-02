#include<stdio.h>
#include<string.h>
struct student{
    char name[15],department[15],course[15];
    int rollno, year;
};

int main(){
struct student data[2];
for(int i=0;i<2;i++){
    fgets(data[i].name,15,stdin);
     fgets(data[i].department,15,stdin);
     scanf("%d",&data[i].rollno);
}
for(int i=0;i<2;i++){
        printf("%s\n",data[i].name);
             printf("%s\n",data[i].department);
     printf("%d\n",data[i].rollno);
}   

return 0;
}