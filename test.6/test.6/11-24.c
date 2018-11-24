# define  _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <stdlib.h>
int main ()
{
	
	int i=0;
	int *p=NULL;
	int num=0;
	scanf("%d",&num);
	p=(int *)malloc(num*sizeof(int));
	if(p==NULL)
	{
		printf ("…Í«Îø’º‰ ß∞‹\n");
	}
	for (i=0;i<num;i++)
	{
		printf ("%d ",(*(p+i)=i));
	}
	printf ("\n");
	free(p);
	p=NULL;
	system ("pause");
	return 0;
}


int main ()
{
	int *p=NULL;
	int i=0;
	int num=0;
	scanf ("%d",&num);
	p=(int *)calloc (num,sizeof(int));
	if (p==NULL)
	{
		printf ("…Í«Îø’º‰ ß∞‹");
	}
	for (i=0;i<num;i++)
	{
		printf ("%d ",*(p+i));
	}
	printf ("\n");
	free(p);
   system ("pause");
   return 0;
}

int main ()
{
	int *p=NULL;
	int *ptr=NULL;
	int i=0;
	int num=10;
	p=(int *)malloc(num*sizeof(int));
	if (p==NULL)
	{
		printf ("…Í«Îø’º‰ ß∞‹");
	}
	
	ptr=(int *)realloc(p,num*sizeof(int));  //◊÷Ω⁄ ˝
	if (ptr!=NULL)
	{
	  p=ptr;
	}
    for (i=0;i<=num;i++)    
    {
		printf ("%d ",(*(p+i)=i));
	}
   printf ("\n");
   free(p);
   system ("pause");
   return 0;
}