# include <stdio.h>
# include <stdlib.h>
#include <string.h>
# include <assert.h>
char *mystrstr (const char* des ,const char *sour)
{  
	assert(*des);
	assert(*sour);
	while (*des++!='\0')
	{  
	    char *d=(char *)des; 
		while(*des==*sour)
		{
			des++;
			sour++;
		}
	if (*sour==0)
	return d;
	}
	return NULL;
}
int main ()
{
	char str1[]="i am a student";
	printf ("%s\n",mystrstr (str1,"am"));
	system("pause");
	return 0;
}



char *mystrchr(const char *dst,int c)
{
	assert(*dst);
	while (*dst)
	{  
		 if (*dst==c)
       {
		   return (char*)dst;
	   }
		 dst++;
	}
	  return NULL;
}

int main ()
{
	char str[]="i am a student";
	printf ("%s\n",mystrchr(str,'m'));
	system ("pause");
	return 0;
}


int mystrcmp(const char *str1, const char *str2)
{
	int ret=0;
	assert(*str1 && *str2);
	while (!(ret=*str1-*str2)&& *str2)
		{
			++str1;
	        ++str2;
	    }
	if (ret>0)
		ret=1;
	else if (ret<0)
		ret=-1;
	return ret;
}
int main ()
{
	char str1[]="abuse";
	char str2[]="students";
	char str3[]="student";
	char str4[]="student";
	printf ("%d\n",mystrcmp(str1, str2));
	printf ("%d\n",mystrcmp(str2, str3));
	printf ("%d\n",mystrcmp(str3, str4));
	system ("pause");
	return 0;
}


void *mymemcpy(void *dst, const void* src,size_t count)
{
	void *ret=dst;
	while (count--)
	{	
		*(char*)dst=*(char *)src;
	      dst=(char *)dst+1;
		  src=(char *)src+1;	
	}
	return (char *)ret;
}

int main ()
{
    char str1[]="abuse power";
	char str2[]="i am a student";
	printf ("%s\n",memcpy(str2,str1,4));
	system ("pause");
	return 0;
}


void *mymemmove (void *dst, const void* src,size_t count)
{
	void *ret=dst;
	if (dst<=src||(char *)dst>=((char *)src+count))
		{
			while (count--)
		  {
			*(char*)dst=*(char *)src;
			 dst=(char *)dst+1;
			 src=(char *)src+1;	
		 }
	   }
	else
		{
	         dst=(char *)dst+count-1;
			 src=(char *)src+count-1;	
	    	while (count--)
	    	 {
			*(char*)dst=*(char *)src;
			 dst=(char *)dst-1;
			 src=(char *)src-1;	
			 }
		}
	return (char *)ret;
}
int main ()
{
	char str1[]="i am very happy";
	printf ("%s\n",mymemmove(str1,str1+5,5));
	system ("pause");
	return 0;
}


