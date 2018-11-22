#include <stdio.h>
#include <stdlib.h>
enum day
{
	mon=1,
	tues=2,
	wed=4,
	thur,
	fri,
	sat,
	sun 
};
int main ()
{
	enum day gnt=wed;
	printf ("%d\n",mon);    //1
	printf ("%d\n",tues);   //2
	printf ("%d\n",wed);   //4
	printf ("%d\n",fri);   //6
	printf ("%d\n",gnt);   //4
	system ("pause");
	return 0;
}


union un
{
  char c;
  int i;
};
union un1
{
	char c[5];
	int i;
};
union un2
{
	short c[7];
	int i;
};
int main ()
{
	union un u;
    u.i=0x11223344;
	u.c=0x55;
	printf ("%d\n",sizeof(u));  //4
	printf ("%p\n",&(u.c)); 
	printf ("%p\n",&(u.i));//结果相同
	printf ("%x\n",u.i);//11223355
	printf ("%x\n",u.c);//55
	printf ("%x\n",sizeof (union un1)); //8
	printf ("%x\n",sizeof (union un2));//10
	system ("pause");
	return 0;
}