////1.编写函数： 
////unsigned int reverse_bit(unsigned int value); 
////这个函数的返回值value的二进制位模式从左到右翻转后的值。 
////
////如： 
////在32位机器上25这个值包含下列各位： 
////00000000000000000000000000011001 
////翻转后：（2550136832） 
////10011000000000000000000000000000 
////程序结果返回： 
////2550136832 
////
////2.不使用（a+b）/2这种方式，求两个数的平均值。 
////
////3.编程实现： 
////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
////请找出这个数字。（使用位运算） 
////
////4. 
////有一个字符数组的内容为:"student a am i", 
////请你将数组的内容改为"i am a student". 
////要求： 
////不能使用库函数。 
////只能开辟有限个空间（空间个数和字符串的长度无关）。 
//

#include <stdio.h>
#include <stdlib.h>	
#include <math.h>	
unsigned int reverse_bit(unsigned int value)
 {  int flag=0;
    int sum=0;
    int m=31;
	while (value)
	{   
		  flag=value%2;
		  value=value/2; 
		  sum=sum+pow(2.0,m)*flag;
			 m--;  
	}
return sum;
}
int main ()
{    
  unsigned int n=0;
  printf ("请随机输入一个数字： ");
  scanf ("%d",&n);
  printf ("%u\n",reverse_bit( n));
  system("pause");
  return 0;
}



#include <stdio.h>
#include <stdlib.h>

 int half (int m,int n)
{
    return //((m&n)+(m^n))/2;
		    (m&n)+(m^n)>>1;
 }
int main ()
{
  int m=0;
  int n=0;
  printf ("请输入2个数字: ");
  scanf ("%d%d",&m,&n);
  printf ("%d\n",half (m,n));
  system ("pause");
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
int find_num(int* num,int zs)
{
    int i=0;
    int t=0;
 for (i=0;i<zs;i++)
  while (zs)
  {  
	 t=* num++ ^t;
	 zs--;
   }
  return t;
}
int main ()
{   int ret=0;
    int s=0;
	int arr[20]={3,5,3,9,5,2,2,7,9,15,7};
	s=sizeof arr/sizeof arr[0];
	ret=find_num(arr,s);
	printf ("%d\n",ret);
    system ("pause");
}

# include <stdlib.h>
#include<stdio.h>
#include<assert.h>
int my_strlen(const char *p)
{
	int count=0;
	assert(p != NULL);
	count = 0;
	while(*p++)
	{
	count++;
	}
	return count;
}
void swap(char *left,char *right)
{
assert(left !=NULL);
assert(right !=NULL);
while(left<right)
	{
	char t = *left;
	*left = *right;
	*right = t;
	right--;
	left++;
	}
}
int main()
{
	char a[] = "student a am i";
	char *p = a;
	char *left = a;
	char *right = a;
	printf("%s\n",a);
	swap(p,p+my_strlen(a)-1);
	printf("%s\n",a);
	while(*p)
	{
     while((*p != ' ')&&(*p != '\0'))
	   {
	    right++;
	    p++;
	   }
       swap(left,right-1);
	if(*p)
	 {
		left = right+1;
		right = left;
	    p++;
	  }
	}
	printf("%s\n",a);
	system ("pause");
	return 0;
	}

