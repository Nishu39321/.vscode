//final code
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//take input part
int declare_result(char (*a)[8]){
    int count_x=0;
    int count_o=0;


    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i][j]=='X'){
                count_x++;
            }
            if(a[i][j]=='O'){
                count_o++;
            }
        }

    }
    if(count_x+count_o==64){
    char winner;
    if(count_o>count_x){
        winner='O';
    }
     if(count_x>count_o){
        winner='X';
    }
    if(count_x==count_o){
        winner='T';
    }

   printf("\033[5;31m");
   printf("GAME OVER");
   printf("\033[0m");
   printf("\033[5;32m");
   printf("X has %d points", count_x);
   printf("\033[0m");
   printf("\033[5;33m");
   printf("O has %d points", count_o);
   printf("\033[0m");
   printf("\033[34m");
   printf("WINNER IS %c", winner);
   printf("\033[0m");
   return 1;
    }
printf("X = %d  O = %d\n",count_x,count_o);
    return 0;
}

int endgame(char (*a)[8],int turn){

    int count_x=0;
    int count_o=0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i][j]=='X'){
                count_x++;
            }
            if(a[i][j]=='O'){
                count_o++;
            }
        }

    }
    if(turn>2){
    if(count_x==0){
        printf("\033[36m");
        printf("O is the winner.");
        printf("\033[0m");
        return 0;
    }
    if(count_o==0){
        printf("\033[36m");
        printf("X is the winner.");
        printf("\033[0m");
        return 0;
    }
    }
}

void flip(char *x ){
    if(*x=='X'){
        *x='O';
    }
    else if(*x=='O'){
        *x='X';
     }
}
int check_valid(char (*arr)[8], char x, int row, int col) {
    if (row >= 0 && row < 8 && col >= 0 && col < 8 && arr[row][col] != ' ' && arr[row][col] != x) {
        return 1;
    }
    return 0;
}

int func(char (*arr)[8],char x,int row,int col,int m,int n,int k){
  int j=col+n;
  int i=row+m;
          if((i+m)>=0&&(i+m)<8&&(j+n)>=0&&(j+n)<8){
          if (check_valid(arr,x,i,j) == 0) {
          return 0;
          }
          if(arr[i+m][j+n]!=' '){
            if(arr[i+m][j+n]==x){
            if(k==0){
            flip(&arr[i][j]);
             }
            return 1;
            }
          else if(arr[i+m][j+n]!=x){
            if(func(arr,x,i,j,m,n,k)==1){
            if(k==0){
            flip(&arr[i][j]);
          }
            return 1;
          }
           }
}
        }
return 0;
}


int main() {
    int p=0;
    char a[8][8],y;
    int row, col;

    char play1[100], play2[100];

    printf("\033[5;36m");
    printf("welcome to this othello adventure:\n");
    printf("Please enter player-1: ");
    scanf("%s",play1);
    printf("\nPlease enter player-2: ");
    scanf("%s",play2);
    printf("\033[0m");

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            a[i][j]=' ';

        }
    }

    a[3][3]='O';
    a[4][4]='O';
    a[3][4]='X';
    a[4][3]='X';
    
 
    int turn=1;
    char x;
    while(turn<=100){
        if(turn%2==1){
            x='X';
            printf("\033[5;36m");
            printf("\n\n%s's Turn\n",play1);
            printf("\033[0m");
        }else{
          x='O';
          printf("\n\nO=%s\n",play2);
        }
         printf("     1    2    3    4    5    6    7    8   \n");
         printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");
         for(int i=0;i<8;i++){
            printf("%d ",i+1);
            for(int j=0;j<8;j++){
                printf("| %c  ",a[i][j]);
                }
            printf("|\n");
             printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");

        }
        printf("\033[32m");
        printf("Enter your input (row col): ");
        printf("\033[0m");
        scanf("%d %d",&row,&col);
         row--;
         col--;

       

        if (row>=0&&row<8&&col>=0&&col<8&&a[row][col]==' '){
            a[row][col] = x;
            turn++;

        } else {
          printf("\033[31m");
          printf("invalid!!!!\n");
          printf("\033[0m");
                  continue;
                   }
        int A=func(a,x,row,col,1,0,0),
            B=func(a,x,row,col,-1,0,0),
            C=func(a,x,row,col,0,1,0),
            D=func(a,x,row,col,0,-1,0),
            E=func(a,x,row,col,1,1,0),
            F=func(a,x,row,col,-1,-1,0),
            G=func(a,x,row,col,1,-1,0),
            H=func(a,x,row,col,-1,1,0);
            if((A==0&&B==0&&C==0&&D==0&&E==0&&F==0&&G==0&&H==0)){
            printf("\033[31m");
            printf("\nPLAYER HAS ENTERED INVALID MOVE\nENTER AGAIN.\n");
            printf("\033[0m");
                    a[row][col]=' ';
                  turn--;
                  continue;
            }

        if(declare_result(a)==1||!endgame(a,turn)){
              printf("     1    2    3    4    5    6    7    8   \n");
         printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");
         for(int i=0;i<8;i++){
            printf("%d ",i+1);
        for(int j=0;j<8;j++){
            printf("| %c  ",a[i][j]);
            }
            printf("|\n");
             printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");
        }
            printf("\033[33m");
            printf("There is no possible chance for them to play. Therefore, the game ends.\n would you like to end the game or restart?\n To RESTART press '1' to exit press '0'. ");
            int option;

            scanf("%d",&option);
            if(option==1){
                main();
            }
            if(option==0){
                printf("\033[31m");
                printf("GAME OVER. BYE!");
                exit(0);
            }

            else{
                printf("\033[34m");
                printf("you've entered a wrong input. try again.\n restart='1' and exit='0' ");
                scanf("%d",&option);
                if(option==1){
                    main();
                }
                if(option==0){
                    printf("\033[36m");
                    printf("GAME OVER.\n");
                    exit(0);
                }
            }
        }
 if(turn%2==1){
            x='X';
          
        }else{
          x='O';
        
        }
      int s=0,t=0;
        for(int m=0;m<8;m++){
            for(int n=0;n<8;n++){
            if(a[m][n]==' '){
            if(func(a,x,m,n,1,0,1)==1||func(a,x,m,n,-1,0,1)==1||func(a,x,m,n,0,1,1)==1||func(a,x,m,n,0,-1,1)==1||func(a,x,m,n,1,1,1)==1||
            func(a,x,m,n,1,-1,1)==1||func(a,x,m,n,-1,-1,1)==1||func(a,x,m,n,-1,1,1)==1){
                  s=1;
                  break;
            }
            }
            }
        }
        if(x='x'){
            y='O';
        }
        else if(x='O'){
            y='X';
        }
        for(int m=0;m<8;m++){
            for(int n=0;n<8;n++){
            if(a[m][n]==' '){
            if(func(a,y,m,n,1,0,1)==1||func(a,y,m,n,-1,0,1)==1||func(a,y,m,n,0,1,1)==1||func(a,y,m,n,0,-1,1)==1||func(a,y,m,n,1,1,1)==1||
            func(a,y,m,n,1,-1,1)==1||func(a,y,m,n,-1,-1,1)==1||func(a,y,m,n,-1,1,1)==1){
                  t=1;
                  break;
            }
            }
            }
        }
        if(s==0&&t==0){
            printf("     1    2    3    4    5    6    7    8   \n");
         printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");
         for(int i=0;i<8;i++){
            printf("%d ",i+1);
        for(int j=0;j<8;j++){
            printf("| %c  ",a[i][j]);
            }
            printf("|\n");
             printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");
        }
            printf("\033[33m");
            printf("There is no possible chance for them to play. Therefore, the game ends.\n would you like to end the game or restart?\n To RESTART press '1' to exit press '0'. ");
            int option;

            scanf("%d",&option);
            if(option==1){
                main();
            }
            if(option==0){
                printf("\033[31m");
                printf("GAME OVER. BYE!");
                exit(0);
            }
        }
        else if(s==0){
                printf("Player %c has no valid moves and needs to pass \n",x);  // Pass condition
                 printf("     1    2    3    4    5    6    7    8   \n");
         printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");
         for(int i=0;i<8;i++){
            printf("%d ",i+1);
        for(int j=0;j<8;j++){
            printf("| %c  ",a[i][j]);
            }
            printf("|\n");
             printf("   ---- ---- ---- ---- ---- ---- ---- ----  \n");
        }
         printf("Press 2 to pass ");
        int pass;
        scanf("%d",&pass );
        if(pass==2){
            p++;
           turn++;
           continue;
        }
        else{
            printf("wrong input\n Press 2 to pass ");
         scanf("%d",&pass );
        if(pass==2){
            p++;
           turn++;
           continue;
        }
        }
        }
       }


    return 0;
}


