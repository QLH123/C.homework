# include "test.h"
void menu ()
{
  printf ("***********************\n");
  printf ("****** 1.��ʼ *********\n");
  printf ("****** 0.�˳� *********\n");
  printf ("****** 2.�� *********\n");
  printf ("****** 3.�е��Ѷ�******\n");
  printf ("****** 4.�ߵ��Ѷ�******\n"); 
  printf ("***********************\n");

}
void game ()
{     int count=0;
	 int word;
	  char arr[ROWS][COLS]={0};
	  char show[ROWS][COLS]={0};
again:		  
	  printf ("��ѡ���Ѷ�:  ");
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
			printf ("�������������ѡ���Ѷ�\n");
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
		printf ("��ѡ����Ϸ��ʼ���˳��� ");
		scanf ("%d",&input);
		switch (input)
		{
			case 1 :
				game ();
				break;
			case 0 :
				printf ("�˳���Ϸ\n");
				break;
			default :
				printf ("�����������������\n");
				break;
		}
       }
	  while (input);
	  system ("pause");
	  return 0;
}