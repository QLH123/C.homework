
# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
 int fib (int m)
{	
    { 
		if (m<3) 
		return 1;
	}
		return  fib (m-1)+fib (m-2);
	
}
int main ()   //쳲��������еݹ���ʽ
{   int n=0;
    printf ("��������n: ");
	scanf ("%d",&n);
	printf ("%d\n",fib(n));
	system ("pause");
	return 0;
}


# include <stdio.h>
# include <stdlib.h>
int main ()
{
	int a=1;
	int b=1;
	int c=0;
	int i=0;
	int n=0;
printf ("��������n: ");
scanf ("%d",&n);
for (i=0;i<n;i++)
{   a=b;
	b=c;
	c=a+b;
}
printf ("%d\n",c);
system ("pause");
return 0;
}

# include <stdio.h>
# include <stdlib.h>
int power (int n,int k)
{   if (k!=0)
    {
		return n*power(n,k-1);
     }
	return 1;
}
int main ()
{              //�η�
	int n=0;
	int k=0;
	int rel=0;
	printf ("please input two numbers:  ");
	scanf ("%d%d",&n,&k);
	rel=power (n,k);
	printf ("%d\n",rel);
    system ("pause");
    return 0;
}


# include <stdio.h>
# include <stdlib.h>
int DigitSum (int t)
{	int sum=0;
	int a=t%10;
	if(t/10!=0)
	{	
	return (a=a+DigitSum(t/10));
	}
   return t;
}
int main()   //����λ��֮��
{
	int a=0;
	int sum=0;
	printf("������һ����:  ");
	scanf("%d",&a);
	sum=DigitSum (a);
	printf("%d\n",sum);
	system("pause");
	return 0;
}


# include <stdio.h>
# include <stdlib.h>	
void reverse_string (char* num)
	{ 
		if (* num!='\0')
    	{ 
			reverse_string (num+1);
			printf ("%c",* num);   //�ݹ�ʵ���ַ������ַ���������
		}
		else
			printf ("%c",*num);
	    }
int main ()
{   
  char arr[]="wo ai wangtao!";
  reverse_string (arr);
  system ("pause");
return 0;
}


# include <stdio.h>
# include <stdlib.h>
int strlen (char* num)
{
{ if (*num!='\0')
	return (1+strlen(num+1));
	}
return 0;       //strlen����
}
int main()
{  char arr[]="2kjhhlh56hjk345";
   int str=strlen (arr);
   printf("%d\n",str);
   system("pause");
return 0;
}

# include <stdio.h>
# include <stdlib.h>
int main()
{ int count=0;
	char arr[]="2kjlh5k345";
	while (arr[count]!='\0')
	{     
	count++;
    }
printf("%d\n",count);
system("pause");
return 0;
}

# include <stdio.h>
# include <stdlib.h>
int  factorial(int n)
{   if (n>1)
	{
    return (n*(factorial (n-1)));
    }
	return 1;
	}
int main ()  // �׳˵ݹ�
	{
	int m=0;
	int ret=0;
	printf ("����������һ���Ǹ�������");
	scanf ("%d",&m);
	ret=factorial (m);
	printf ("%d\n",ret);
	system ("pause");
	}
   

# include <stdio.h>
# include <stdlib.h>
int main ()
	{
	int n=0;
	int i=0;
	int sum=1;
	printf ("����������һ���Ǹ�������");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum*=i;
	}
	printf ("%d\n",sum);
	system ("pause");
		
}


# include <stdio.h>
# include <stdlib.h>
int  print (int n)
{   if (n>9)
	{
        print (n/10);
    }
printf ("%d ",n%10);
}
int main ()   //��ӡ�ַ�
	{
	int m=0;
	printf ("����������һ���Ǹ�������");
	scanf ("%d",&m);
	print (m);
	system ("pause");
	}