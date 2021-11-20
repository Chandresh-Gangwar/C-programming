#include <stdio.h>
#include <string.h>

struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};
union union_example
{
	int integer;
	float decimal;
	char name[20];
};

int  main()
{
	struct struct_example s={18,3.8,"kiet"};

	union union_example u={18,3.8,"kiet"};

	printf("structure data:\n integer: %d\n"
				"decimal: %.1f\n name: %s\n",
				s.integer, s.decimal, s.name);
	printf("\nunion data:\n integeer: %d\n"
				"decimal: %.1f\n name: %s\n", 
				u.integer, u.decimal, u.name);

	printf("\nsizeof structure : %d\n", sizeof(s));
	printf("sizeof union : %d\n", sizeof(u));
    return 0;
}
