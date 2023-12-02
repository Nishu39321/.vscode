#include<stdio.h>

struct student_info{
    char name[50];
    int chem, phy, maths;
};
void func(struct student_info);
int main() {
    int n;
    scanf("%d",&n);
struct student_info arr[n];
for(int i=0;i<n;i++){
    scanf("%s %d %d %d",arr[i].name,&arr[i].chem,&arr[i].phy,&arr[i].maths);
}
for(int i=0;i<n;i++){
   func(arr[i]);
}

    return 0;
}
void func(struct stdent_info input){
    printf("%s ",input.name);
    float percent;
    percent=(input.maths+input.phy+input.chem)/3;
    printf("%.2f\n",percent);
    
}