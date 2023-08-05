/*
NOTE : can not assign a values within structure
. : member access operator
WAP to initialize the structure variables and disp it.
	int a;  		<== declaration
	a = 100;		<== assignment
	int a = 100;		<== initinalization
*/
struct Employee
{
	int age;		// member-1
	char name[20];		// member-2
};
struct Employee e1 = {25,"AAA"};//global variable
void main()
{
	struct Employee e2={28,"BBB"};//local variable
	clrscr();

	printf("Age : %d\n",e1.age);
	printf("Name : %s\n",e1.name);

	printf("Age : %d\n",e2.age);
	printf("Name : %s\n",e2.name);
	getch();
}