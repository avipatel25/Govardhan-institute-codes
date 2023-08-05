/*
global variable
	variable which are declared outside the function
*/
struct Employee
{
	int age;
	char name[20];
};
struct Employee e1;//global variable
void main()
{
	struct Employee e2;//local variable
	clrscr();
	printf("%d\n",sizeof(struct Employee));
	printf("%d\n",sizeof(e1));
	printf("%d\n",sizeof(e2));
	getch();
}