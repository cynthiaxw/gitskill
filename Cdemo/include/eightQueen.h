#ifndef _EIFHTQUEEN_H
#define _EIFHTQUEEN_H

#define N 8
extern int Board[N][N];
extern int Countor;

void printBoard(void);
void putChess(int row,int col);
int judgeBoard(int row,int col);
int Trial(int row);

#endif //_EIFHTQUEEN_H
