#include<stdio.h>
int main(int argc,char const*argv[])
{
    int data[]={1,6,5,8,12,10,15,20,17,16};
    int i,j,a;
    printf("\npresent values in array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",data[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(data[i]>data[j])
           { a=data[i];
             data[i]=data[j];
             data[j]=a;
           }
        }
    }
    printf("\narray after bubble sort\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",data[i]);
    }
    return 0;
}
