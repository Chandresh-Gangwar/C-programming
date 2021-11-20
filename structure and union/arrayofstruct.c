#include<stdio.h>
#include<string.h>
int main()

{
    int i;
    struct student 
    {   char name[20];
        long int rollno;
        char gender;
        float height;
    };
    struct student data[3]={{"ravi",121,'m',5.6},{"neha",122,'f',5.2},{"chandu",123,'m',5.5}};
   
    printf("the content are:\n");
    for(i=0;i<=2;i++)
    {
       printf("%s\n **Record is  \n",data[i].name);
       printf("%d\n",data[i].rollno);
       printf("%c\n",data[i].gender);
       printf("%0.2f\n",data[i].height);
    }
       return 0;   
}