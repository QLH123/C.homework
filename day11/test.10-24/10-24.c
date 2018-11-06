# include <stdio.h>
#include <stdlib.h>
int main()
{
	int A=0;
	int B=0;
	int C=0;
	int D=0;
	int E=0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if (((B==2)^(A==3)) && ((B==2)^(E==4)) && ((C==1)^(D==2)) && ((C==5)^(D==3)) && ((E==4)^(A==1)) &&((A!=B)&&(A!=C)&&(A!=D)&&(A!=E)&&(B!=C)&&(B!=D)&&(B!=E)&&(C!=D)&&(C!=E)&&(D!=E)))
							printf("A=%d, B=%d, C=%d, D=%d, E=%d\n", A, B, C, D, E);					
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}

//方法一
int main ()
{
    int i=0;
	char n;
	for (i=1;i<5;i++)
	{    n=64+i;
		 if(('A'!=n)+('C'==n)+('D'==n)+('D'!=n)==3)
			{
			  printf ("%c是凶手\n",n);		
			}	
	}
system ("pause");
return 0;
}



//方法二
int main ()
{
    int A=0;
	int B=0;
	int C=0;
	int D=0;
	for (A = 0; A < 2; A++)
	{
		for (B = 0; B <2 ; B++)
		{
			for (C = 0; C <2; C++)
			{
				for (D = 0; D <2; D++)
				{
					if (
						((A==0 && C==1 && D==1 && D==1) | (A==0 && C==1 && D==0 && D==0) | (A==0 && C==0 && D==1 && D==0) | (A==1 && C==1 && D==1 && D==0)) &&
						((A==1&&B==0&&C==0&&D==0)|(A==0&&B==1&&C==0&&D==0)|(A==0&&B==0&&C==1&&D==0)|(A==0&&B==0&&C==0&&D==1))
						)
						printf ("A=%d, B=%d, C=%d, D=%d\n",A,B,C,D);
				}
			}
		}
	}
	printf ("输出为1的是凶手\n");
	system ("pause");
	return 0;
}


#define N 20
int main()
{
    int i;
    int j;
	int a[N][N]={0};
    for(i=0;i<N;i++)
    {
        a[i][0]=1;
        a[i][i]=1; 
    }
    for(i=2;i<N;i++)
    {
        for(j=1;j<i;j++)
     a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    
    
    }
	system ("pause");
return 0;
}

