#include<stdio.h>  
void main ()  
{  
    char s[11] = "javatpoint";  
    int i = 0;   
    int count = 0;  
    while(i<11)  
    {  
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')  
        {  
            count ++;  
        }  
        i++;  
    }  
    printf("The number of vowels %d",count);  
}  