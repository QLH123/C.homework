# include <stdio.h>
# include <stdlib.h>
int main ()
{
  char str1[]="hello bit.";   
  char str2[]="hello bit.";   //�ַ������ջ����ʹ�����ȫ���ͷ�
  char *str3="hello bit.";
  char *str4="hello bit.";    //����ַ������׵�ַ���ַ���������ַ���������
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
	printf("&arr=%p\n",&arr);  //��ͬ  &arr��ʾ��������ĵ�ַ��������������Ԫ�صĵ�ַ
	printf("arr+1=%p\n",arr+1); //��4   ��ָ����ָ�����͵Ĵ�С
	printf("&arr+1=%p\n",&arr+1); //��40  ��ʵ�������������С
    system ("pause");
    return 0;
}