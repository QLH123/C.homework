

#define use _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
void right_rotate ( char *arr,int sz,int k)
{
	  int i=0;
	  k=k%sz;
	  while (k--)
   	{  
	  char temp=arr[sz-1];     //����
	  for (i=sz-1;i>0;i--)
	  {
		  arr[i]=arr[i-1];
	  }
	  arr[i]=temp;
    }
}
void left_rotate (char *arr,int sz,int k)
{     
	  int i=0;
	  k=k%sz;
	  while (k--)
	{  
	  char temp=arr[0];
	  for (i=0;i<sz-1;i++)    //����
	  {
		  arr[i]=arr[i+1];
	  }
	  arr[i]=temp;
    }
}
int main ()
{ 
  int k=0;
  char arr[]="ABCDEFG";
  printf ("�������������֣� ");
  scanf ("%d",&k);
  left_rotate (arr,(sizeof arr/sizeof arr[0]-1),k);
  printf ("%s\n",arr);
 // right_rotate (arr,(sizeof arr/sizeof arr[0]-1),k);
 // printf ("%s\n",arr);
  system ("pause");
  return 0;
}



#define use _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int is_rotate (char *str1 ,char *str2)            //�ж��ַ����Ƿ���Ⱥ���
{
	if(strcmp (str1,str2)==0)
		return 1;
	else
		return 0;
}
//int right_rotate (char*str1, char *str2,int sz)      //��������
//{
//	  int i=0;
//	  int p=sz;
//	  int ret=0;
//	  while (p--)               //���ַ������Ƚ�������ת
//   	{  
//	  char temp=str2[sz-1];     //�����һ���ַ���ÿ���ȱ�������
//	  for (i=sz-1;i>0;i--)
//	  {
//		  str2[i]=str2[i-1];          //ʹ�ַ������κ���
//	  }
//	  str2[i]=temp;            //�ѱ�������ݸ���ǰ�߿��˵��±���
//	  ret=is_rotate (str1,str2);   //�����ַ�����ÿ����ת����бȽ�
//	  if (ret)                     //�����Ⱦͷ���1�����򷵻�0
//	  break;
//	}
//	  return ret;
//}
int left_rotate (char* str1,char *str2,int sz)   //��������
{     int p=sz;
	  int i=0;
	  int ret=0;
	  while (p--)
	{  
	  char temp=str2[0];          //�����ַ���ÿ���ȱ�������
	  for (i=0;i<sz-1;i++)    
	  {
		  str2[i]=str2[i+1];       //ʹ�ַ�������ǰ��
	  }
	  str2[i]=temp;           //�ѱ�������ݸ�����߿��˵��±���
	 ret= is_rotate (str1,str2);       //�����ַ�����ÿ����ת����бȽ�
	  if (ret)
	 break;
    }
	  return ret;
}
int main ()
{   int ret1=0;
    //int ret2=0;
	char string1[]="ABCDE";
	char string2[]="ABCED";
	ret1=left_rotate (string1,string2,(sizeof string2/sizeof string2[0]-1));
	//printf ("%d\n",ret1);
	//ret2=right_rotate (string1,string2,(sizeof string1/sizeof string1[0]-1));
	//printf ("%d\n",ret2);
	if (ret1)
	    printf("�ַ���str2�Ǿ����ַ���str1��ת��\n");
	else
		printf("�ַ���str2���Ǿ����ַ���str1��ת��\n");
	/*if (ret2)
	    printf("�ַ���str2�Ǿ����ַ���str1��ת��\n");
	else
		printf("�ַ���str2���Ǿ����ַ���str1��ת��\n");*/
	system ("pause");
	return 0;

}

