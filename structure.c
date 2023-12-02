#include<stdio.h>
struct student{
    char name[25];
    int roll;
 float marks;
}; 
int main(){
 struct student student1={"Nishu,1045,15.0"};
 struct student *ptrstudent=&student1;
printf("Student")
// printf("%d",sizeof(struct student));
 /*int i,j,k,n;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d %s %f",&class[i].roll, &class[i].dept_code, &class[i].cgpa);
 }
    for(j=0;j<n-1;j++){
        for(k=j+1;k<n;k++){
        if(class[j].roll>class[k].roll){
            t=class[j];
            class[j]=class[k];
            class[k]=t;
        }
 }
}
 for(i=0;i<n;i++){
    printf("%d %s %.1f\n",class[i].roll, class[i].dept_code, class[i].cgpa);
 }*/
 return 0;
}

