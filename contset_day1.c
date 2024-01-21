#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
      int n;
      scanf("%d",&n);
      char s1[n+1];
      char s2[n+1];
      scanf("%s",s1);
      scanf("%s",s2);
      int t01=0,t10=0;
      for(int i=0;i<n;i++){
        if(s1[i]=='0'&&s2[i]=='1'){
            t01++;
        }
        if(s1[i]=='1'&&s2[i]=='0'){
            t10++;
        }
      }
      if(t01==0&&t10==0){
        printf("0\n");
        continue;
      }
      if(t01>=t10){
        printf("%d\n",t01);
      }
      if(t10>t01){
        printf("%d\n",t10);
      }
    }
 
    return 0;
}