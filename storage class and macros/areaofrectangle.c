#include<stdio.h>
#define	area(l,b) (l*b);
 
int main()
{
	float l,b,a;	
	printf("enter length of rectangle: ");
	scanf("%f",&l);
	printf("enter breadth of rectangle: ");
	scanf("%f",&b);
	a=area(l,b);
	printf("AOR: %0.2f\n",a);
	return 0;
	
}