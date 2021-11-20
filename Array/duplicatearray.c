#include <stdio.h>
int main()
{
    int arr[100];
    int i, j, n, count=0;
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter elements in array :");
    for (i=0;i<n;i++);
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                
                count++;
                break;
            }
        }
    }
    printf("\n total no. of duplicate elements are =%d",count);
    return 0;
}
