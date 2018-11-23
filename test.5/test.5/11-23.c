# include <stdio.h>
# include <stdlib.h>
int main ()
{
  char str1[]="hello bit.";   
  char str2[]="hello bit.";   //字符串存放栈区，使用完会全部释放
  char *str3="hello bit.";
  char *str4="hello bit.";    //存放字符串的首地址，字符串存放在字符区常量区
  if (str1==str2)
	  printf ("str1 and str2 are same\n");
  else
	  printf ("str1 and str2 are not same\n");    //not same 
  if (str3==str4)
	  printf ("str3 and str4 are same\n");   //same
  else
	  printf ("str3 and str4 are not same\n");
  system ("pause");
  return 0;
}

int main ()
{
	int arr[10]={0};
	printf("arr=%p\n",arr);
	printf("&arr=%p\n",&arr);  //相同  &arr表示整个数组的地址，而不是数组首元素的地址
	printf("arr+1=%p\n",arr+1); //差4   加指针所指向类型的大小
	printf("&arr+1=%p\n",&arr+1); //差40  其实加数组的整个大小
    system ("pause");
    return 0;
}