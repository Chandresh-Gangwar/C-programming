#include<stdio.h>
#include<stdlib.h>

/*structure declaration*/
struct employee {
    char name[30];
    int EId;
    float salary;
};
int main()
{
    /*declare and initialization of structure variable*/
	struct employee emp={"chandresh",1034,5000.00};
    printf("\n Name: %s",emp.name);
    printf("\n ID : %d",emp.EId);
    printf("\n salary : %0.2f",emp.salary);
    return 0;
}
