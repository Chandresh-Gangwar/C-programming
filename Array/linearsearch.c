#include<stdio.h>
int linearsearch(int arr[],int n, int item);
int main(void){
    int i,n,item,arr[50];
    int index;
    printf("enter the number of elemetns :");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
    printf("Enter the item to be searched :");
    scanf("%d",&item);
    index = linearsearch(arr,n,item);
    if(index==-1)
         printf("number %d not found in array\n",item);  
    else 
        printf("number %d found at position %d\n",item,index);
    return 0;}

int linearsearch(int arr[],int n, int item) {
    int i=0;
    while (i<n && arr[i]!=item)
        i++;
      if (i<n)
          return i; 
      else 
          return -1;
    
}