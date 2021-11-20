#include<stdio.h>
int factorial(int);
 int main()
{
   int n;
   printf("Enter a number  =>");
   scanf("%d",&n);

     int ans = factorial(n); 
     printf("Factorial of a number is =>  %d",ans);
     return 0; 
}
int factorial(int fact)  
{  
    int i,sum=1;
    for(i=1;i<=fact;i++) sum=sum*i;
     return(sum);
}

