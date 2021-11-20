#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i,n,sum=0;
    printf("Enter the size of array you want to create:");
    scanf("%d",&n);
    ptr =(int *) malloc (n * sizeof(int));
    for (int i =0 ; i < n; i++)
    {    
        printf("Enter %d element: ",i);
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
        for(i=0; i< n; i++)
        {
        printf("\n the value at %d of this array is %d",i,*(ptr+i));} 
        printf("\nsum=>%d",sum);
    return 0;
}