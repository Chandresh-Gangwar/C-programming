#include<stdio.h>

int main()
{
     int i,j,k,num;
     printf("enter the number to print the range=");
     scanf("%d",&num);
    printf("even numbers are=\n");
      for (i=0;i<=num;i++)
      {
         if (i%2==0)
         printf("%d",i);
      }
    printf("\n odd numbers are=\n");
        for (i=0;i<=num;i++)
      {
         if (i%2!=0)
         printf("%d",i);
      }
      return 0;
}



