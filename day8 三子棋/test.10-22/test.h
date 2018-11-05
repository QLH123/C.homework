#ifndef _GAME_H_
#define _GAME_H_ 

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>
#define ROW 3   //三子棋行数
#define COL 3   //三子棋列数

void init(char arr[ROW][COL],int row,int col);
void display(char arr[ROW][COL],int row,int col);  //打印棋盘函数
void player(char arr[ROW][COL],int row,int col);   //玩家走函数
void computer(char arr[ROW][COL],int row,int col); //电脑走函数
char win(char arr[ROW][COL],int row,int col);      //判断输赢函数


#endif _GAME_H_