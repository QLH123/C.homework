# include "test.h"
void menu ()
{
  printf ("***********************\n");
  printf ("****** 1.开始 *********\n");
  printf ("****** 0.退出 *********\n");
  printf ("****** 2.简单 *********\n");
  printf ("****** 3.中等难度******\n");
  printf ("****** 4.高等难度******\n"); 
  printf ("***********************\n");

}
void game ()
{     int count=0;
	 int word;
	  char arr[ROWS][COLS]={0};
	  char show[ROWS][COLS]={0};
again:		  
	  printf ("请选择难度:  ");
	  scanf ("%d",&word);
	  switch (word)
	  {
	  case 2 :
             count=EASY_COUNT;
	         break;
	    
	  case 3 :
			 count= MIND_COUNT ;
			 break;
	  case 4 :
			 count= HARD_COUNT ;
			 break;
	default :
			printf ("输入错误，请重新选择难度\n");
			goto again;
	  }
	InitBoard (arr,ROWS,COLS,'0');
	InitBoard (show,ROWS,COLS,'*');
    SetMine(arr,ROW,COL,count);
	DisplayBoard(show,ROW,COL);
	//DisplayBoard (arr,ROW,COL);
	FindMine (arr,show,ROW,COL,count);
	

}
int main ()
{
   int input=0;
   srand((unsigned int) time(NULL));
      do
	  {
        menu ();
		printf ("请选择游戏开始或退出： ");
		scanf ("%d",&input);
		switch (input)
		{
			case 1 :
				game ();
				break;
			case 0 :
				printf ("退出游戏\n");
				break;
			default :
				printf ("输入错误，请重新输入\n");
				break;
		}
       }
	  while (input);
	  system ("pause");
	  return 0;
}