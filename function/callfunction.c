
#include <stdio.h>
 int max(int num1, int num2);
 
int main () 
{
   int a , b;
   
   int number;
   printf("\nenter the value of a");
   scanf("%d",&a);
   printf("\nenter the value of b");
   scanf("%d",&b);
   number = max(a, b);
   printf( "Max value is : %d\n", number );
 
   return 0;
}
 
int max(int num1, int num2) 
{
   int output;
   if (num1 >= num2)
      output= num1;
   else
      output = num2;
 
   return output; 
}