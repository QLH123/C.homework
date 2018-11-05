# include <stdio.h>
# include <stdlib.h>
int count_one_bits(unsigned int value)
{   int i=0;
	while (value)
     { if (value%2==1)
        i++;
	    value=value/2;
     }
return i;
}
int main ()
{  int ret=0;
   unsigned int a=0;
   printf ("随机输入一个无符号的数: ");
   scanf ("%d",&a);
   ret=count_one_bits(a);
   printf ("%d\n",ret);
   system ("pause");
   return 0;
}


void init (int* arr,int n)
{   int i=0;
	for (i=31;i>=0;i--)
	{   if  (n!=0)
		{
			arr[i]=n%2;
	        n=n/2;
	     }
	 }
	printf ("二进制序列：");
	for (i=0;i<=31;i++)
	 {   
        printf ("%d",arr[i]);
     }
	printf ("\n");
	printf ("奇数序列：");
	for (i=31;i>=0;i-=2)
	 {   
        printf ("%d",arr[i]);
     }
	 printf ("\n");
     printf ("偶数序列：");
	for (i=30;i>=0;i-=2)
	 {   
        printf ("%d",arr[i]);
     }
	printf ("\n");
}
int main ()
{  
   int a=0; 
   int num[31]={0};
   printf ("随机输入一个整数: ");
   scanf ("%d",&a);
   init (num,a);
   system ("pause");
   return 0;
}



void fun (int n)
{   
	if (n>9)
	{
     (fun(n/10));
	}
	 printf ("%d ", n%10);
}

int main ()
{  
   int a=0;
   printf ("随机输入一个数: ");
   scanf ("%d",&a);
   fun (a);
   system ("pause");
   return 0;
}


int fun (int a,int b)
{  int num=0;
   int i=0;
    num=a^b;
	while (num)
     { if (num%2==1)
        i++;
	    num=num/2;
     } 
   return i;
}
int main ()
{  int ret=0;
   int a=0;
   int b=0;
   printf ("随机输入二个整数: ");
   scanf ("%d%d",&a,&b);
   ret= fun (a,b);
   printf ("%d\n",ret);
   system ("pause");
   return 0;
}


