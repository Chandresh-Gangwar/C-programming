#include<stdio.h>
int binarysearch(int arr[],int n, int item);
int main(void)
{
    int i,n,item,arr[50];
    int index;
    printf("enter the number of elemetns :");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
    printf("Enter the item to be searched :");
    scanf("%d",&item);
    index =binarysearch(arr,n,item);
    if(index==-1)
         printf("number %d not found in array\n",item);  
    else 
        printf("number %d found at position %d\n",item,index);
    return 0;
}

int binarysearch(int arr[],int n, int item) 
{
    
    int low= 0, high=n-1, mid;
    while (low<=high)
   {     /* code */
       mid=((low+high)/2);
        if(item>arr[mid])
          low=mid+1;              /*search in right side*/
        else if(item<arr[mid])
           high=mid-1;            /*search in left side*/
        else
           return mid; 
    }
   return -1;
}