#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     FILE *fs, *fc;
     char ch;
     fs =fopen("ncopy.c","rb");
     if (fs==NULL)
      {
         puts("source file canot be opened");
         exit(0);
      }
     fc =fopen("ncopy1.c","wb");
     if (fc==NULL){
         puts("source file cannot be opened");
         fclose(fs);
         exit(0);}
    else printf("COPIED SUCCESFULL");
    while (1){
        ch=fgetc(fs);
        if(ch==EOF)
        break;
        else
        fputc(ch,fc);}
    fclose(fs);
    fclose(fc);
    return 0;}
