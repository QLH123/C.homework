# include <stdio.h>
# include <stdlib.h>
int main ()
{  int zs,i;
	int arr1 []={11,21,31,41,51};
	int arr2[]={10,19,18,17,16};
	    for (i=0;i<5;i++)
		{
				arr1[i]=arr1[i]+arr2[i];
				arr2[i]=arr1[i]-arr2[i];
				arr1[i]=arr1[i]-arr2[i];
		}                
	for (i=0;i<5;i++)
	{
	    printf ("%d\t",arr1[i]);             	
	}
	printf ("\n");
	for (i=0;i<5;i++)
	{
	    printf ("%d\t",arr2[i]);
	                	
	}
	system ("pause");
	return 0;
}

# include <stdio.h>
int main ()
{
	int ch=1;
	int i=0;
	double sum=0.0;
for (i=1;i<100;i++)
{   
	sum=sum+ch*1/i;
	ch=-ch; 
}
printf ("%f",sum);
return 0;
} 


# include   <stdio.h>
int main ()
{
  int i=0;
  int sum=0;
  int ch=0;
  int sh=0;
  for (i=1;i<=100;i++)
	{   ch=i/10;
		sh=i-ch*10;
	  if (9==ch)
		sum++;
	 if (9==sh)
		sum++;
	}
	printf ("%d",sum);
	return 0;
} 