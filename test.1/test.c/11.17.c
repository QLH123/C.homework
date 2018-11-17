# include <stdio.h>
# include <stdlib.h>
# pragma pack(1)
//# pragma pack(2)
//# pragma pack(4)
//# pragma pack(8)
//# pragma pack(16)
struct s1
{
	char c1;
	int i;
	char c2;
};
struct s2
{
	char c1;
	char c2;
	int i;
};
struct s3
{
	double c1;
	char c2;
	int i;
};
#pragma pack()
struct s4
{
	char c1;
	struct s3 s3;
	double d;
};
struct s5
{
	struct s4 s4;
	int e;
	char f[5];
	char* h;
	void(*g)(int);

};
int main ()
{
	printf ("%d\n",sizeof(struct s1));
	printf ("%d\n",sizeof(struct s2));
	printf ("%d\n",sizeof(struct s3));
	printf ("%d\n",sizeof(struct s4));
	printf ("%d\n",sizeof(struct s5));
    system ("pause");
    return 0;
}