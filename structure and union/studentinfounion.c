#include <stdio.h>
#include<string.h>

union student {
  char name[20];
  char subject[20];
  float percentage;
};
 int main()
 {
     union student data1;
     union student data2;

      printf("data1 values");
      printf("\n------------------\n");
      strcpy(data1.name,"raju");
      printf("name : %s\n",data1.name);
      strcpy(data1.subject,"c progamming");
      printf("subject : %s\n",data1.subject);    
      data1.percentage = 86.50;
      printf("percentage: %0.2f\n",data1.percentage);
      printf("\n------------------------\n");
      printf("data2 values");      
      strcpy(data2.name,"mahi");
      printf("name : %s\n",data2.name);
      strcpy(data2.subject,"psuc");
      printf("subject: %s\n",data2.subject);   
      data2.percentage = 90.05;
      printf("percentage : %0.2f\n",data2.percentage);
       return 0;
 }


