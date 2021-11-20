#include<stdio.h> 

int main(void)
{       
    int i=1,base, exponent, result = 1;
    printf("Enter base: \n");
    scanf("%d", &base);
    printf("Enter exponent: \n");
    scanf("%d", &exponent);
   
    while(i <= exponent)
    {
        result *= base;
        i++;
    }
    printf("%d^%d = %d", base, exponent, result);
    return 0; 
}