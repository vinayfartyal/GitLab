#include<stdio.h>
int main()
{

     char board[8][8] = {{'.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','R','.','.','.','p'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'}};
     int i=0,j=0,k=0,flag=0,count=0;
     for(i=0;i<8;i++)
     {
         for(j=0;j<8;j++)
         {
             if(board[i][j]=='R')
                {
                    flag++;
                    break;
                }
         }
         if(flag==1)
           {
              break;
           }
     }
     for(k=i-1;k>=0;k--)//UPWARD
     {
         if(board[k][j]=='p')
         {
             count++;
         }
         else if(board[k][j]=='B')
         {
             continue;
         }
     }
     for(k=i+1;k<8;k++)//DOWNWARD
     {
         if(board[k][j]=='p')
         {
             count++;
         }
         else if(board[k][j]=='B')
         {
             continue;
         }
     }
     for(k=j-1;k>=0;k--)//RIGHT
     {
         if(board[i][k]=='p')
         {
             count++;
         }
         else if(board[i][k]=='B')
         {
             continue;
         }
     }
     for(k=j+1;k<8;k++)//LEFT
     {
         if(board[i][k]=='p')
         {
             count++;
         }
         else if(board[i][k]=='B')
         {
             continue;
         }
     }
    printf("count=%d",count);

}
