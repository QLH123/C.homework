#ifndef _GAME_H_
#define _GAME_H_ 

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>
#define ROW 3   //����������
#define COL 3   //����������

void init(char arr[ROW][COL],int row,int col);
void display(char arr[ROW][COL],int row,int col);  //��ӡ���̺���
void player(char arr[ROW][COL],int row,int col);   //����ߺ���
void computer(char arr[ROW][COL],int row,int col); //�����ߺ���
char win(char arr[ROW][COL],int row,int col);      //�ж���Ӯ����


#endif _GAME_H_