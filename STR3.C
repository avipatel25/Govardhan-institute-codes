/*
. : member access operator
WAP to set the values to a structure variables and disp it.
*/
struct Employee
{
	int age;		// member-1
	char name[20];		// member-2
};
struct Employee e1;//global variable
void main()
{
	struct Employee e2;//local variable
	clrscr();

	e1.age = 25;
	strcpy(e1.name,"AAA");

	e2.age = 27;
	strcpy(e2.name,"BBB");

	printf("Age : %d\n",e1.age);
	printf("Name : %s\n",e1.name);

	printf("Age : %d\n",e2.age);
	printf("Name : %s\n",e2.name);
	getch();
}