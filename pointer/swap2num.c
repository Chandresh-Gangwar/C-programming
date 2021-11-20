#include<stdio.h>
int main()
{
    int a,b;
    int *p1,*p2;
    int temp;
    printf("Enter value for a and b :");
    scanf("%d %d",&a,&b);

    printf("before swapping: a=%d b=%d",a,b);
      p1 = &a;
      p2 = &b;
      temp =*p1;
      *p1 =*p2;
      *p2 =temp;
    
    printf("\nafter swapping: a=%d b=%d",a,b);
    return 0;
}

