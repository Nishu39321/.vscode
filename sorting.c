#include<stdio.h>
struct bank{
    int accno,balance;
    char name[15];
};
void func(struct bank s){
    printf("%s\n%d\n%d\n",s.name,s.accno,s.balance);
}

int main(){
    struct bank acc[5];
    for(int i=0;i<3;i++){
        scanf("%d",&acc[i].accno);
        scanf("%s",acc[i].name);
        scanf("%d",&acc[i].balance);
    }
for(int i=0;i<5;i++){
    if(acc[i].balance<100){
        func(acc[i]);
    }
}
int code;
if(code=0){
    if(acc[i].balance)
}
    return 0;
}
