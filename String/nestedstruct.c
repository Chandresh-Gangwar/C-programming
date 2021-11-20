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
 char branch[20]; 
 struct college_detail clg_data;
 }stu_data;

int main()
{
    struct student_detail stu_data={ 1, "ravi",85.60,"MCA",110,"KIET"};

    printf("Details of student:");
    printf("\n*******************************\n");
    
    printf("id: %d\n", stu_data.id);
    printf("Name: %s\n", stu_data.name);
    printf("Marks: %.2f\n", stu_data.marks);
    printf("Branch: %s\n", stu_data.branch);
    printf("college id :%d\n",stu_data.clg_data.college_id);
    printf("college Name:%s\n",stu_data.clg_data.college_name);
    return 0;
}

