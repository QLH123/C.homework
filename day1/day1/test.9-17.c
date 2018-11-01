# include<stdlib.h>
# include <stdio.h> 
int main ()
 {   
   int i,n,m;
   int j=0;
   for (n=100;n<=200;n++) 
       { j=0;
        for (i=1;i<=n;i++)
       {
		   m=n%i;
		   if(m==0)
			j++;
	   }
		if (j==2)
       printf ("%d\t",n);
	   } 
   system ("pause");
	   return 0;
}


# include <stdlib.h>
# include  <stdio.h>
int main ()
{
	int i,j;
	for (i=1;i<=9;i++)
	for (j=1;j<=i;j++) 
{
	printf ("%d*%d=%d",j,i,i*j);
	if (i==j) printf ("\n");
	if (i!=j)  printf ("\t");
	}
	system ("pause");
	return 0;
}



# include <stdlib.h>
# include <stdio.h>
int main ()
{
	int i;
	int count=0;
  for (i=1000;i<=2000;i++)
   {
      if ((i%4==0)&&(i%100!=0)||(i%400==0))
     {
		 printf ("%d\t",i);
		 count++;
      }
  }
  printf ("%d\n",count);
  system ("pause");
  return 0;	
} 
