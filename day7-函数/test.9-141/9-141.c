# define _CRT_SECURE_NO_WARNINGS 1

    # include <stdio.h>
	# include <stdlib.h>
	void mult (int n)
	{   int i=1;
		int j=1;
		for (i=1;i<=n;i++)
		{  
		for (j=1;j<=i;j++) 
			{
				printf ("%d*%d=%d\t",j,i,j*i);
		     }
		printf ("\n");
		}
   }
	int main ()
	{
		int x=0;
		printf ("请输入任意数x形成x*x口诀表:\n");
		scanf ("%d",&x);
		mult (x);
		system ("pause");
	return 0;
}


# include <stdio.h>
# include <stdlib.h>
void temp (int a,int b)
{	a=a+b;
	b=a-b;
	a=a-b;
    printf ("%d %d",a,b);
}
int main ()
{ int x=0;
	int y=0;
	printf ("please input 2 numbers:\n");
	scanf ("%d%d",&x,&y);
	temp (x,y);
	system ("pause");
	return 0;
}


# include <stdio.h>
# include <stdlib.h>
int leap_year (int year)
{  return (((year%4==0)&&(year%100!=0))||(year%400==0));
}
int main ()
{  int year=0;
	int get=0;
	while (1)
	{ printf ("请输入任意的年份： ");
	    scanf ("%d",&year);
	    get=leap_year (year);
	if (get==1)
	    printf ("是闰年\n ");
	else
        printf ("不是闰年\n ");
	}
	system ("pause");
	return 0;
}


   
# include <stdio.h>
# include <stdlib.h>
void init (int *num, int cs)
{ int i=0;
	for (i=0;i<cs;i++)
	{  
	num[i]=2*i-1;
	}
	for (i=0;i<cs;i++)
	{
		printf ("%d ",num[i]);
	}
	printf ("\n");
}
/* void print (int *num,int cs)
{  int i=0;
	for (i=0;i<cs;i++)
	{
		printf ("%d ",num[i]);
	}
}*/
void empty (int* num,int cs)
{   int i=0;
	for(i=0;i<cs;i++)
	{
		num[i]=0;
	}
		for (i=0;i<cs;i++)
	{
		printf ("%d ",num[i]);
	}
	printf ("\n");
}
void reverse (int* num,int cs)
{   int i=0;
	int j=0;
	int num1=0;
	for(i=0,j=cs-1;i<j;i++,j--)
	{ 
	num1=num[i];
	num[i]=num[j];
	num[j]=num1;
	}	
    for (i=0;i<cs;i++)
	{
		printf ("%d ",num[i]);
	}
	printf ("\n");
}
int main ()
{   
	int arr[10]={0};
	int sz=sizeof(arr)/sizeof (arr[0]);
		init (arr,sz);
	   //print (arr,sz);
		reverse (arr,sz);
		//print (arr,sz);
		empty (arr,sz);
        //print (arr,sz);
		system ("pause");
		return 0;
}


# include <stdio.h>
	# include <stdlib.h>
	int prime_num (int x)
	{  int j=0;
	   int k=0;
	   for (j=2;j<x;j++)
	    {  if(x%j==0)
	      k++; 
	    }
	   return k;
	}
	int main ()
	{  int x=0;
	   int ret=0;
	   while (1)
	    { printf ("请输入任意的数字： ");
	     scanf ("%d",&x);
	     ret=prime_num (x);
	   if (ret==0)
	      printf ("是素数\n ");
	   else
          printf ("不是素数\n ");
	     }
	   system ("pause");
	   return 0;
	}
