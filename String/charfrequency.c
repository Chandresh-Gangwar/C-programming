#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int count =0;
    printf("enter a sentence:");
    fgets(str,sizeof(str),stdin);
    printf("enter a character to find its freqency:");
    scanf("%c",&ch);
    for (int i =0;str[i]!='\0';i++)
    {
        if (ch==str[i])
        count++;
    }
    printf("frequency of %c=%d",ch,count);
    return 0;
}