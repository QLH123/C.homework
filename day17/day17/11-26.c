
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main ()
{
	int n=10;
	char *pc=(char *)&n;
	int *pi=&n;
	printf ("%p\n",&n);
	printf ("%p\n",pc);
	printf ("%p\n",pc+1);
	printf ("%p\n",pi);
    printf ("%p\n",pi+1);
	printf ("%d\n",sizeof (char *));
	printf ("%d\n",sizeof (int *));
    system ("pause");
    return 0;
}

int main ()
{
	char arr1[]="abc";
	char arr2[3]={'a','b','c'};
	char arr3[4]={'a','b','c'};
	printf ("%d\n",sizeof(arr1));
	printf ("%d\n",sizeof(arr2));
	printf ("%d\n",sizeof(arr3));
	printf ("%d\n",strlen(arr1));
    printf ("%d\n",strlen(arr2));
	printf ("%d\n",strlen(arr3));
    system ("pause");
    return 0;
}

int main ()
{
	int arr[10]={0};
	int i=0;
	int sz=sizeof (arr)/sizeof (arr[0]);
	for (i=0;i<sz;++i)
	{
		printf ("&arr[%d]=%p\n",i,&arr[i]);
	}
	system ("pause");
	return 0;
}

int main ()
{
    int	arr1[3]={4};
	int *p1=arr1;   //��һ��Ԫ�صĵ�ַ
	int arr2[][5]={{4,2,6},{3}};
	int *p2=arr2[5];  //��ʾ��һ��Ԫ�صĵ�ַ
	int a=sizeof (arr1)/sizeof (arr1[0]); //��Ԫ�ظ���
	int b=sizeof (arr2[0])/sizeof (arr2[0][0]);  //��Ԫ�ظ���
	printf ("%p\n",p1);
	printf ("%p\n",p2);
	printf ("%d\n",a);
	printf ("%d\n",b);
	system ("pause");
    return 0;
}


int main ()
{
	int arr[3][4];
	int i=0;
	int j=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
		  printf ("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
		}
	}
	system ("pause");
	return 0;
}

//void fun(int arr1[],int z)
void fun(int *arr1,int z)
{
   int i=0;
   for (;i<z;i++)
   {
     printf ("%d ",arr1[i]);
   }
   printf ("\n");
}
int main ()
{
	int arr[]={1,2,8,4,5,6,7,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	fun (arr,sz);
	system ("pause");
	return 0;
}


int main ()
{
	int arr[10]={1,2,3,4,5};
	printf ("%p\n",arr);  //��Ԫ�ص�ַ
	printf ("%p\n",&arr[0]); //��Ԫ�ص�ַ
	printf ("%p\n",&arr);  //��������ĵ�ַ����ַ��ӡ����һ������ʵ�ʲ�ͬ��
	printf ("%d\n",sizeof(&arr));  //ָ��Ĵ�С
	printf ("%d\n",sizeof(arr));  //��ʾ���������С
	printf ("%d\n",sizeof(arr+1));//ָ���int������ǰһ���ľ���
    system ("pause");
	return 0;
}


int main ()
{
	int arr[]={1,2,3,4,5,6,7};
	int *p=arr;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<sz;i++)
	{
	  printf ("&arr[%d]=%p=>%d  <===> p+%d=%p=>%d\n",i,&arr[i],arr[i],i,p+i,*(p+i));
	}
	system ("pause");
	return 0;
}


int main ()
{
	int i=0;
    int arr[][3]={{1,2,3},{4,5},{6,7}};
	int sz=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<sz;i++)
	{
	  printf ("%d ",*(*(arr+i)));
	}
	system ("pause");
	return 0;
}
