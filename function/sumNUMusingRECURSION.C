#include <stdio.h>
int sum(int);

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int a = sum(num);
    printf("sum = %d", a);
    return 0;
}

int sum(int n) {
    if (n != 0)
        return n + sum(n-1); 
    else
        return n;
}
