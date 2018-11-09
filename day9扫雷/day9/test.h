#ifndef __TEST_H__
#define __TEST_H__

#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>

#define  ROW 9
#define  COL 9
#define EASY_COUNT 10
#define MIND_COUNT 30
#define HARD_COUNT 50

#define  ROWS ROW+2
#define  COLS COL+2

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard (char board[ROWS][COLS],int row,int col);
void DispiayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col,int COUNT);
void FindMine (char ArrBoard[ROWS][COLS],char ShowBoard[ROWS][COLS],int row,int col,int COUNT);
int GetMineCount (char Arr[ROWS][COLS],int x,int y); 

#endif __TEST_H__