/*Program to understand pointers to structures*/
#include<stdio.h>
struct student 
{
    char name[20];
    int rollno;
    int marks;
};
int main(void)
{   char name;
   int rollno, marks;
    struct student stu ={ "jason", 25,68};
    struct student *ptr = &stu;
    printf("name %s\t",ptr= name);
    printf("roll no %d\t",ptr= rollno);
    printf("marks %d\n",ptr= marks);
    return 0;
}