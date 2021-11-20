#include<stdio.h>
int main()
{
     int arr[]={15,18,22,28,34,39,52};
    int n,i,len=10;
    int found=0;
    printf("enter element to search=");
    scanf("%d",&n);
    for(i=0;i<len;i++)
    {
        if(arr[i]==n) 
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
    printf("\n%d element found at position=%d",n,i+1);
    }
    else
    {
        printf("\n%d is not found in array",n);
    }
    return 0;
}
