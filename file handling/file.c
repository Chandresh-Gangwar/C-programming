#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.c","w");
   
   // char c = fgetc(ptr);
   // printf("the character I read was %c\n",c);
    
   //  char str[50];
   //    fgets(str,50 ,ptr);
   // printf("the string I read was= %s\n",str);
    
    fputc('o',ptr);
    fputs("this is user__sky",ptr);

    fclose(ptr);
    return 0;
}