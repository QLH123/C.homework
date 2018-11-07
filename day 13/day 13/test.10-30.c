
# include "test.h"
void change ( int *num,int sz)
{   int left=0;
	int right=sz;
	int i=0;
	assert(num!=NULL);
  while (left<right)
  {
	  if (num[left]%2==0)
	  {    
		  if (num[right]%2!=0)
		  {
		   num[left]=num[left]+num[right];
		   num[right]=num[left]-num[right];
		   num[left]=num[left]-num[right];
		  }
		  else
			  right--;
	  }  
	  else
	     left++;
  }
   for ( i=0;i<sz;i++)
	  {
       printf ("%d",num[i]);
      } 
  printf ("\n");
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	change (arr,sizeof arr/sizeof arr[0]);
	system("pause");
	return 0;
}


int main ()
{  int arr[row][col]={{1,3,4},{2,4,5},{4,5,6}};
   int key=3;
   int x=2;
   int y=0;
   while ((x>=0)&&(y<=2))
     {
        if (arr[x][y]==key)   
	     {
	      printf ("找到了存在数%d，行为%d 列为%d\n",arr[x][y],x+1,y+1);
		  break;
	     }
		else if(arr[x][y]>key)
	      x--;
	    else
	      y++;
    }
   if((x>2)||(y<0))
	  {
	   printf("找不到了\n");
	  }
   system ("pause");
   return 0;
}
 