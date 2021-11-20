#include<stdio.h>
int main()
{
  int n,i;
  printf("enter the size of array="); 
  scanf("%d",&n);
  int arr[n]; 
  int *ptr[n];
  int **ptr2[n];
  printf("Enter %d elements=",n);
  for(i=0;i<n;i++) 
  scanf("%d",&arr[i]);
  for(i=0;i<n;i++) 
    {
      ptr[i] =&arr[i]; 
      ptr2[i] =&ptr[i];
    }
printf("array printed using double pointer **ptr2=");
for(i=0;i<n;i++)
printf(" %2d ",*(*ptr2[i]));
printf("\nREVERSE array printed using double pointer **ptr2=");
for(i=n-1;i>=0;i--) 
printf(" %2d ",*(*ptr2[i]));
return 0;
}

