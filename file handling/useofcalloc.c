#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,i;
    int *ptr,sum=0;
    printf("Enter number of element:");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));
    printf("enter the element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("sum=%d",sum);
    free(ptr);
return 0;
}