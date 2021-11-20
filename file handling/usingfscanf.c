#include<stdio.h>
int main()
{
    FILE *fp;
    char a[20];
    fp = fopen("myfile.txt","rb");
    while(fscanf(fp,"%s",a)!=EOF)
    {
        printf("\t%s",a);
    }
    fclose(fp);  
}
