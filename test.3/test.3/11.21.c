# include <stdio.h>
# include <stdlib.h>
struct s
{
	int data[1000];
	int num;
};
struct s si={{1,2,3,4},20};
void print1 (struct s si)
{
printf ("%d\n",si.num);
}
void print2 (struct s* ps)
{
printf ("%d\n",ps->num);   //结构体传参需要传址，可提高效率
}
int main ()
{
  print1 (si);   //传结构体
  print2 (&si);    //传址
  system ("pause");
  return 0;
}

struct A
{
	int a:5;
	int b:2;
	int c:1;
	int d:5;
	int k:15;
	char h:2;
	char s:7;
};
int main ()
{

printf ("%d\n",sizeof(struct A));
system ("pause");
return 0;
}