#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%2==0)		
		printf("Number is even\n");
	else
	{
		printf("Number is odd\n");
		num*=2;
		printf("Now the number is %d\n",num);	
	}
	return 0;
}