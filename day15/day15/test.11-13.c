# include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main ()
{   int i=0;
    int j=0;
	int ret=0;
	int num[]={2,4,4,2,3,7,3,7,9,6,9,11};
	int sz=sizeof num/sizeof num[0];
	for(i=0;i<sz;i++)
	{ 
	  ret=0;
	  for (j=0;j<sz;j++)
	    {
            if(num[j]==num[i])
            {
                ret++;
            }
        }
        if(ret==1)
        {
            printf("%d ",num[i]);
        }

    }
	printf ("\n");
	system ("pause");
	return 0;
}

int main ()
{  
  int money=20;
	int count=0;
	int k=0;
	while (money)
	{
	    count=count+money+k;
		k=money%2;
	    money=money/2;
	}
	printf ("¿ÉÒÔºÈ%dÆ¿Ë®\n",count);
	system ("pause");
	return 0;
}



char* mystrcpy (char *des, const char * sour)
{       
	char*p=des;
	 assert(sour);
	 assert(des);
	 while (* des++=*sour++)
	 {
	     ;
	 }
	 return p;  //会发生指向错误，des再循环时指向发生变化
}
int main ()
{
	char str1[]="hello bit bit bit";
	char str2[]="i am a student";
	mystrcpy(str1,str2);
	printf ("%s\n",str1);
	printf ("%s\n",str2);
	system("pause");
    return 0;
}


char* mystrcat (char *des, const char * sour)
{       char*p=des;
	 assert(sour);
	 assert(des);
	 while (*des)
	 {
	      des++;
	 }
	 while (* des=*sour)
	 {
		 des++;
		 sour++;
	 }
	 return p;
}
int main ()
{
	char str1[]="hello bit";
	char str2[]="i am a student";
	mystrcat(str1," and ");
	mystrcat(str1,str2);
	printf ("%s\n",str1);
	printf ("%s\n",str2);
	system("pause");
    return 0;
}





