#include<stdio.h>
#include<string.h>

  struct student
  {
    char name[25];
    int age;
    char branch;
   
}student;

int main()
{
   struct student s1;
   printf("\nEnter student record:\n");
   printf("\nstudent name:");
   scanf("%s",s1.name);
   printf("\nstudent age:");
   scanf("%d",&s1.age); 
   printf("\nstudent branch:");
   scanf("%s",&s1.branch);

   printf("student name is %s",s1.name);
   printf("student age is %d",s1.age);
   printf("student branch is %s",s1.branch);
}
