#include<stdio.h>
int main()
{
  int var=10;
  int *ptr1;
  int **ptr2;
  ptr1=&var;
  ptr2=&ptr1;

   printf("\nAddress of variable=%p",&var);
   printf("\nAddress of pointer1=%p",&ptr1);
   printf("\nAddress of pointer2=%p",&ptr2);
      printf("\n");
  printf("\nValue hold by pointer1=%p\n",ptr1);
  printf("Value hold by pointer2=%p\n",ptr2);
  printf("Value hold by variable=%d\n",var);
  printf("Value of variable accessed using double pointer=%d",*(*ptr2));
  return 0;
}
