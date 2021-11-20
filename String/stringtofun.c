#include <stdio.h>
void printstr(char str[])
{
  printf("string is:%s",str);
}
int main()
{
    char str[]="string to functions in c";
    printstr(str);
    return 0;
}