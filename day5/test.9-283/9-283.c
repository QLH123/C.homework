# include <stdio.h>
# include <time.h>
# include <stdlib.h>
void menu ()
{
printf ("**************************\n");
printf ("********* 1.play *********\n");
printf ("********* 0.exit *********\n");
printf ("**************************\n");
}
void game ()
{int input=0;
int random_key=rand ()%100+1;
 while (1)
  { printf ("��������µ�������:\n");
    scanf ("%d",&input );
	if (input>random_key)
		printf ("�´���, ����������\n");
	else if (input<random_key)
	    printf (" ��С�ˣ�����������\n");
	else
	{
		printf ("�¶��ˣ���ϲ����ս�ɹ�");
		break;
	}
   }
 }
int main()
{  int input =0;
   srand ((unsigned)time(NULL));
	do
	{
   menu ();
	  printf  ("��ѡ��\n");
	  scanf ("%d",&input);
	  switch ( input )
		{ case 1:
			  game ();
			  break;
		  case 0 :
			  break;
		  default :
	  	  printf ("���������룬ѡ�����!\n");
		  break;
	  }
	}
  while (input);
  system ("pause");
  return 0;
}



# include <stdio.h>
#include <stdlib.h>
void main ()
{
 int ZHEBAN (int num[],int left ,int right ,int key );
 int num []={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; 
  int key=14;
  int left=0;
  int right=sizeof(num)/sizeof(num[0]);
   int rel=ZHEBAN (num ,left,right,key);
 if (-1==rel)
	 printf (" �Ҳ�����\n");
 else
	 printf ("�ҵ���,�����±�Ϊ��%d\n",rel);
     system ("pause");
}
int ZHEBAN (int num[],int left ,int right ,int key )
	 {   int mid=0;
		 while (left<=right)
      	{
		mid=left+(right-left)/2;
		if (key==num[mid])
	      return mid;    
		else if (key>num[mid])
			left=mid+1;
		else 
			right=mid-1;
	     }
		 return -1;
     }



    # include <stdlib.h>
    # include <stdio.h>
    # include <string.h >
	int main ()
	{ int j=0;
	  char password[]="123456";
	  char num[20];
	 for (j=0;j<3;j++)
	 {   printf (" ����������:\n");
		 scanf ("%s",num);
	    if( strcmp(password,num)==0)  
		 { printf ("��½�ɹ�\n") ;
		  break;
		 }
	   else 
	       printf ("�����������������\n"); 
	   }
	 if(j==3)

     printf (" �˳�");
	 system ("pause");
	return 0;
	}



# include <stdio.h>
# include <stdlib.h>
int main ()
{   char arr;
	while ('arr'!=0)
   {  printf ("��������������ַ�:\n");
      arr=getchar ();
	if ((arr>='A')&&(arr<='Z'))
		{
		 arr=arr+32;
	    putchar(arr);
		arr=getchar();
		printf ("\n");
	     }
	else if ((arr>='a')&&(arr<='z'))
	     {
		  arr=arr-32;
          putchar(arr);
		  arr=getchar();
		  printf ("\n"); 
	      }
	else 
	     break;
	}  
	system ("pause");
    return 0; 

}