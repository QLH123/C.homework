#define _CRT_SECURE_NO_WARNINGS 1
	# include "test.h"

	void meun ()
	{    printf ("*********************\n");
		 printf ("****** 1.play *******\n");
		 printf ("****** 0.exit  ******\n");
		 printf ("*********************\n");
	}
	void game ()
	{   char retu=0;
		char num[ROW][COL]={0};
		init (num,ROW,COL);
		display (num ,ROW,COL);
		while (1)
		{
		  player (num,ROW,COL);
		  display (num,ROW,COL);
		  system("CLS");
		  retu=win (num,ROW,COL);
	 if(retu=='x')
		{
			printf("���ʤ��\n");
			break;
		}
	 if(retu=='0')
		{
			printf("����ʤ��\n");
		    break;
		}
	if(retu=='A')
		{
			printf("�;�\n");
			break;
		}
		computer(num,ROW,COL);
		display(num,ROW,COL);
		retu=win(num,ROW,COL);
	if(retu=='x')
		{
			printf("���ʤ��\n");
			break;
		}
	if(retu=='0')
		{
			printf("����ʤ��\n");
			break;
		}
	if(retu=='A')
		{
			printf("�;�\n");
			break;
		}
	  }	
}
	int main ()
	{  
		int input =0;
		 srand((unsigned int)time(NULL));
	  do 
	   {   meun ();
	       scanf ("%d",&input);
		   switch (input)
			{case 1:
			   game ();
			    break;
		    case 0:
               break;
			default :
				printf ("�������������ѡ��");
				break;
	        }
	  }
	while (input);
		return 0;
	    system ("pause");
	}