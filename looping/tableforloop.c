#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number for the table=");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d=%d\n",num,i,(num*i));
    }
    return 0;
}
