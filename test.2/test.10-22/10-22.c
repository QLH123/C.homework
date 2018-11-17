# include <stdio.h>
# include <stdlib.h>
void main ()
{
  int a=13;
  int b=0;
printf ("%d\n",b=a<<1);
printf ("%d\n",b=a>>1);
printf ("%d\n",a);
system ("pause");
}

# include <stdio.h>
# include <stdlib.h>
void test1 (int arr[])
{
  printf ("%d\n",sizeof (arr));
}
void test2 (char ch[])
{
  printf ("%d\n",sizeof (ch));
}
int main ()
{ 
	int arr[10]={0};
	char ch[10]={0};
	printf ("%d\n",sizeof (arr));   //40
	printf ("%d\n",sizeof (ch));   //10
	test1 (arr);    //4
	test2 (ch);     //4
	system ("pause")
	return 0;
}


# include <stdio.h>
# include <stdlib.h>
int set_bit(int a, int pos, int flag)
{
	int b = 1 << (pos - 1);
	if (flag == 0)
	{
		a &= ~b;
	}
	else
	{
		a |= b;
	}
	return a;
}
int main()
{    int e=0;
     int g=0;
	 int c=0;
	 int ret=0;
	 printf ("输入一个数，操作数，置1或0\n");
	 scanf ("%d%d%d",&e,&g,&c);
	 ret=set_bit(e,g,c);
	 printf("%d\n", ret);
	 system ("pause");
	 return 0;
}

