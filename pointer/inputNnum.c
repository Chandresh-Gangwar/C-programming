#include <stdio.h>
int main()
{
   int arr[25], i,n;
   printf("enter elements to store in the array:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",arr+i);
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element=%d : %d \n",i,*(arr+i));
	  }
	   return 0;
}