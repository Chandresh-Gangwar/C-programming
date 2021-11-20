#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter string1=");
    gets(s1);
    printf("enter string2=");
    gets(s2);
    if (strcmp(s1,s2)==0)
        printf("equal string");
        else
        printf("not equal string");
        return 0;
}