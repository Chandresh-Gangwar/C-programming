#include<stdio.h>
#include<conio.h>
int main()
{
    int i,marks[5];
    printf("enter 5 marks:");
    for(i=0;i<5;i++)
    {
     scanf("%d",&marks[i]);
    }
    printf("marks stored in array at index places:\n");
    for(i=0;i<5;i++)
    {
     printf("marks[%d]=%d\n",i,marks[i]);
    }
      return 0;
    }
