#include "test.h"
void InitBoard (char board[ROWS][COLS],int rows,int cols,char set)
{
  memset (&board[0][0],set,rows*cols*sizeof (board[0][0]));
}
void DisplayBoard (char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<=col;i++)
	{
	   printf ("%d ",i);
	}
	printf ("\n");
	for (i=1;i<=row;i++)
	{
		printf ("%d ",i);
       for (j=1;j<=col;j++)
	   {
	    printf ("%c ",board[i][j]);
	   }
	
	  printf ("\n");
	}
	printf ("----------------------------------\n");

}
void  SetMine(char board[ROWS][COLS],int row,int col,int COUNT)
{  
  while (COUNT)
  {
    int x=rand()%row+1;
	int y=rand()%col+1;
	if (board[x][y]=='0')
	{
	  board[x][y]='1';
	  COUNT--;
	}
  }
}
int GetMineCount (char Arr[ROWS][COLS],int x,int y)
{
	    return (Arr[x+1][y]+Arr[x+1][y+1]+
		Arr[x+1][y-1]+Arr[x-1][y]+Arr[x-1][y+1]+
		Arr[x-1][y-1]+Arr[x][y-1]+Arr[x][y+1]-8*'0');
}
void FindMine (char ArrBoard[ROWS][COLS],char ShowBoard[ROWS][COLS],int row,int col,int COUNT)
{
	int x=0;
	int y=0;
	int win=0;
	int count=0;
	int p=1;
	while (win<row*col-COUNT)
	{  
	  printf ("请重新输入坐标： ");
	  scanf ("%d%d",&x,&y);
	  if (x>=1 && x<=row && y>=1 && y<=col)
	  {
	   if (ArrBoard[x][y]=='1')
	   {   
		   if (p==1)
		   { 
			    p++;
				//DisplayBoard (ArrBoard,row,col);
			    ArrBoard[x][y]='0';
				SetMine(ArrBoard, row, col,1);
		        count=GetMineCount(ArrBoard,x,y);
		        ShowBoard[x][y]=count+'0';
			    DisplayBoard (ShowBoard,row,col);
			   // DisplayBoard (ArrBoard,row,col);

		   }
		   else
		   {
		   printf ("游戏失败\n");
		   DisplayBoard  (ArrBoard,row,col);
		   break;
		   }
	   }
	   else
	   {  
		  p++;
	     count=GetMineCount(ArrBoard,x,y);
		 ShowBoard[x][y]=count+'0';
		 DisplayBoard (ShowBoard,row,col);
		 win++;
	   }
	  }
	  else
       {
		   printf ("坐标错误，请重新输\n");
		  
	   }
	}
	if(win==row*col-COUNT)
	{
	  printf ("恭喜你成功\n");
	  DisplayBoard (ArrBoard,ROW,COL);
	
	}
}
