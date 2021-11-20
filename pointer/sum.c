#include<stdio.h>
int main() 
{
  int i, a[6], sum = 0;
  printf("Enter 6 numbers: ");
  for(i = 0; i < 6; ++i)
    {
      scanf("%d", a+i);
      sum += *(a+i);
    }
  printf("Sum = %d", sum);
  return 0;
}