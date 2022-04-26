#include<stdio.h>
struct student{
	int age;
	float marks;
	char name[20];
};
void main()
{
	struct student s1;
	printf("enter the details of student\n");
	scanf("\n%d %f %s",&s1.age,&s1.marks,&s1.name);
	printf("\n%d %f %s",s1.age,s1.marks,s1.name);
}
