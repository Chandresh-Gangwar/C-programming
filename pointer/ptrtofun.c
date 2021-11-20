#include<stdio.h>
int swap(int *a, int *b); 
int main()       
{
  int m =10,n=20;
  int *mm=&m;
  int *nn=&n;
  printf("------------------\n");
  printf("before swapping:\n");
  printf("m=%d\n",m);
  printf("n=%d\n",n);
  swap(mm,nn);
  printf("-----------------\n");
  printf("After swapping:\n");
  printf("m=%d\n",m);
  printf("n=%d",n);
  return 0;
} 
int swap(int*a,int*b)
{
  int temp;
  temp=*a;
  *a =*b;
  *b =temp;
}