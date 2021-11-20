#include<stdio.h>
#include<string.h>

struct college_detail
{ int college_id;
 char college_name[50];
 };

struct student_detail
{ int id;
 char name[20];
 float marks;
 struct college_detail clg_data;
 }stu_data;

int main()
{
    struct student_detail stu_data;

    printf("Details of student: \n\n");

    printf("Enter id:"); scanf("%d\n",stu_data.id);

    printf("Enter name: "); scanf("%s",stu_data.name);

    printf("Enter marks: "); scanf("%f", stu_data.marks);
    printf(" enter college id:"); scanf("%d",stu_data.clg_data.college_id);
    printf("Enter college name:"); scanf ("%s",stu_data.clg_data.college_name);

    printf("\n*******************************\n\n");

    printf("id: %d\n", stu_data.id);
    printf("Name: %s\n", stu_data.name);
    printf("Marks: %.2f\n", stu_data.marks);
    printf("college id is:%d\n",stu_data.clg_data.college_id);
    printf("college Name is:%s\n",stu_data.clg_data.college_name);
    return 0;
}

