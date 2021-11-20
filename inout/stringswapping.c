#include <stdio.h>

int main()
 {
     int index = 0;
   char s1[] = "bus";     
   char s2[] = "car";     
   char ch;
 
   printf("Before Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);

   while(s1[index] != '\0') 
   {
      ch = s1[index];
      s1[index] = s2[index];
      s2[index] = ch;
      index++;
   }
   printf("After Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);
   return 0;
}