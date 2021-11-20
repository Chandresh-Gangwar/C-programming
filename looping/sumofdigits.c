
#include <stdio.h>
int main()  
{
    int n,t,sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n > 0)
    {
        t=n % 10;
        sum=sum + t;
        n=n/10;
    }
    printf("sum=%d", sum);
    return 0;
}  