 # include <stdio.h>
 # include <stdlib.h>
int main()
{
	int i,j,k;
	for(i=1;i<8;i++)
	{
        for(k=0;k>=i-7;k--)
    	printf(" ");
		 for(j=0;j<2*i-1;j++)
		printf("*");
		printf("\n");
	}
	for(i=8;i<14;i++)
	  {
	   for(k=0;k<=i-7;k++)
	    printf(" ");
	     for(j=0;j<=26-i*2;j++)
	    printf("*");
	    printf("\n");
	  }
	system ("pause");
	return 0;
	}

# include <stdlib.h>
# include <stdio.h>
int main ()
{
	int i=0;
	int s=0;
	int g=0;
	int b=0;
	int sum=0;	
	for (i=0;i<=999;i++)
	{   
		b=i/100;
		s=(i-b*100)/10;
		g=(i-s*10)%10;
	sum=b*b*b+s*s*s+g*g*g;
		if((i/100!=0)&&(i==sum))
		printf ("%d\t",i);
	}
	printf ("\n");
	system ("pause");
return 0;
}


# include <stdlib.h>
# include <stdio.h>
int main()
	{  int i=0;
   int sn=0;
   int a=0;
   int j=0; 
   printf ("请输入任意的一个整数:\n" );
   scanf ("%d",&a);
   j=a;
   for (i=0;i<5;i++)
   { 
    sn=sn+j;
	j=10*j+a;
   
   }
printf ("%d\n",sn);
system ("pause");
	return 0;
} 