#include "test.h"
void init (char arr[ROW][COL],int row,int col)
{  
memset (&arr[0][0],' ',row*col*sizeof (arr[0][0]));	
}
void display (char arr[ROW][COL],int row,int col)	
{   int i=0;
	int j=0;
	for ( i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf(" %c ",arr[i][j]);
            if (j<row-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i<row-1)
        {
            for (j=0; j<col; j++)
            {
                printf("---");
                if (j<row-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
	printf ("-----------------------\n");
}
void player(char arr[ROW][COL],int row,int col)
 {
	 int x=0;
	 int y=0;
	 while (1)
	 {  printf ("请输入坐标: ");
	    scanf ("%d %d",&x,&y);
		if (x>0 && x<=row && y>0 && y<=col)
		   { 
			if (arr[x-1][y-1]==' ')
		        { 
					arr[x-1][y-1]='x';
			         break;		
		        }
			else
				printf ("坐标已被占用，请重新输入\n");	
	    	}
		 else
			printf ("输入错误，请重新输入！\n");
	 }
 }
void computer(char arr[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	while (1)
	{  x=rand()%row;
	   y=rand()%col;
	   if (arr[x][y]==' ')
		 {
		   arr[x][y]='0';
			break;
	     }
	}
}

 int  FALL(char arr[ROW][COL],int row,int col)
 { int i=0;
   int j=0;
   for (i=0;i<row;i++)
	     {         
		  for (j=0;j<col;j++)
		   {
	       if(arr[i][j]==' ')
		   {
			   return 0;
		   }
         }
 
 }
    return 1;
 }
char win(char arr[ROW][COL],int row,int col)
{  int i=0;
   int j=0;
   for (i=0;i<row;i++)
      {
	     if (arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2]&& arr[i][2]!=' ')
			 return arr[i][0];
      }
   for (j=0;j<col;j++)
	  {
		  if (arr[0][j]==arr[1][j] && arr[1][j]==arr[2][j]&& arr[2][j]!=' ')
		  return arr[0][j];
      }
      if (arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]&& arr[2][2]!=' ')
		  return arr[2][2];
	  if (arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]&& arr[2][0]!=' ')
		  return arr[2][0];
	  if (FALL (arr,row,col)==1)
	  {  
	    return 'A';
	  }
}





