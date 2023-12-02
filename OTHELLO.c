#include <stdio.h>
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

   printf("GAME OVER\nX has %d points\nO has %d points.\n WINNER=%c\n",count_x,count_o,winner);
    return 1;
    }
     printf("\nX score=%d  O score=%d",count_x,count_o);
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
        printf("O is the winner.");
        return 0;
    }
    if(count_o==0){
        printf("X is the winner");
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
return 0;
}


int main() {
    char a[8][8];
    int row, col;
    char option;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i%2==0){
                a[i][j]='X';
            }
            else {
                a[i][j]='O';
            }
        }
    }
    ;
    a[7][7]=' ';
    //a[3][3]=a[4][4]='O';
    //a[4][3]=a[3][4]='X';

    int turn=1;
    char x;
    while(turn<=100){
        if(turn%2==1){
            x='X';
            printf("\nPLAYER 1 X's TURN\n");
        }else{
          x='O';
          printf("\nPLAYER 2 O's TURN\n");
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

        printf("Enter your input (row col): ");
        scanf("%d %d",&row,&col);
         row--;
         col--;

        if (row>=0&&row<8&&col>=0&&col<8&&a[row][col]==' '){
            a[row][col] = x;
            turn++;

        } else {
          printf("invalid!!!!\n");
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
            printf("\nPLAYER HAS ENTERED INVALID MOVE\nENTER AGAIN.\n");
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

            printf("There is no possible chance for them to play. Therefore, the game ends.\n whould you like to end the game or restart?\n To RESTART press 'r' to exit press 'e'. \n");
            scanf("%c", &option);
            if(option=='r'||option=='R'){
                main();
            }
            else if(option=='e'||option=='E'){
                printf("GAME OVER. BYE!");
                return 0;
            }
            else{
                printf("you've entered a wrong input. try again.\n restart=r and exit=e");
                scanf("%c",&option);
                if(option=='r'||option=='R'){
                main();
            }
            if(option=='e'||option=='E'){
                printf("GAME OVER. BYE!");
                return 0;
            }
            }
        }
         if(turn%2==1){
            x='X';
          
        }else{
          x='O';
        
        }
      int s=0;
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
        if(s==0){
                printf("Player %c has no valid moves and needs to pass",x);  // Pass condition
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
         printf("Press P to pass");
        char pass;
        scanf("%c",&pass );
        if(pass=='p'||pass=='P'){
           turn++;
           break;
        }
        }
       }


    return 0;
}
