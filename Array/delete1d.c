#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int data[]={12,34,56,78,90,17,34,13,45,67};
    int value,position,i;
    int x;
    int len=10;
    printf("enter position to delete value");
    scanf("%d",&position);
    printf("\npresent values in array\n");
    for(i=0;i<len;i++)
    {
        printf(" %d ",data[i]);
    }
    if(position>len)
    {
        printf("\ndeletion not posible");
        exit(0);
    }
    else
    {
     for(x=position-1;x<len;x++) //left shift
     {
          data[x]=data[x+1];
     }
    }
    len=len-1;
    printf("\narray after deletion is\n");
    for(i=0;i<len;i++)
    {
        printf(" %d ",data[i]);
    }

    return 0;
}
