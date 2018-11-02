
# include <stdio.h> 
int main ()
{
   int a,b;
	printf ("请输入2个整数 \n");
	scanf ("%d%d",&a,&b);
	a=b+a;
	b=a-b;
	a=a-b;
	printf ("%d %d\n",a,b);
   return 0;
}

#include <stdio.h> 
 int main ()
 {   int i; 
     int max=0;
     int num[10];
	printf (" please input ten numbers:\n");  
	for (i=0;i<10;i++)
	{
		scanf ("%d", &num[i]);
	}
	for (i=1;i<=10;i++)
	{
		if (num[i-1]>num[i])
		{   max=num[i-1];
			num[i-1]=num[i];
			num[i]=max;
		}		
	}
    printf ("%d\n",max);
    return 0;
} 


#include <stdio.h>
int main()
	{
		int x,y,z,max,min;
		scanf("%d%d%d",&x,&y,&z);
	if(x>y)
		{
		max=x;
		min=y;
	}
	else
	{
		max=y;
		min=x;
	}
	  if(z>max) max=z;
	  if(min>z) min=z;
	  y=x+y+z-max-min;
	  x=max;
	  z=min;
	printf("从大到小排序：%d %d %d\n",x,y,z);
	}

#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h> 
# include <stdlib.h>
int main ()
{   int a,b,x,i;
    int y=0;
	printf ("please input two numbers:\n");
    scanf ("%d%d",&a,&b);
    x=(a>b)?b:a;
    for (i=2;i<=x;i++)
   {
       if((a%i==0)&&(b%i==0))	
        y=i;	
   }
	 printf ("%d",y);
	 system ("pause");
	 return 0;
} 