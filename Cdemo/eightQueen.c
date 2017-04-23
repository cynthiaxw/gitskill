#include "include/eightQueen.h"

int Board[N][N];
int Countor=0;
void printBoard(void)
{
    int i,j;
    Countor ++;
    printf("No.%d solution:\n",Countor);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",Board[i][j]);
        }
        printf("\n");
    }
    
    getchar();
}

void putChess(int row,int col)
{
    int i;
    for(i=0;i<N;i++)
    {
        if(i == col)
            Board[row][i]=1;
        else Board[row][i]=0;
    }
}

int judgeBoard(int row,int col)
{
    int i,j1,j2,j3;
    if(0 == row)return 1;
    for(i=row-1;i>=0;i--)
    {
        j1=col;j2=col-row+i;j3=col+row-i;
        if(Board[i][j1])return 0;
        if(j2>=0&&Board[i][j2])return 0;
        if(j3<N&&Board[i][j3])return 0;
    }
    return 1;
}

int Trial(int row)
{
    int col;
    if(row>=N)
        printBoard();
    else
    {
        for(col=0;col<N;col++)
        {
            putChess(row,col);
            if(judgeBoard(row,col))
                Trial(row+1);
        }
    }
    return Countor;
}
