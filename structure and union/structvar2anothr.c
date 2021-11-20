 /* Program to assign a structure variable to another structure variable*/
#include<stdio.h>
#include<stdlib.h>
struct student 
{
    char name [20];
    int rollno;
    float marks;

};
int main(void)
{
    struct student s1={"oliver",12,98};
    struct student s2;
    s2=s1;
    printf("s1:%s %d %0.2f\n",s1.name,s1.rollno,s1.marks);
    printf("s2:%s %d %0.2f\n",s2.name,s2.rollno,s2.marks);
    return 0;
}