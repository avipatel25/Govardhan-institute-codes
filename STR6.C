/*define a structure named employee  having employee name , age ,
and salary as there data member

WAP to get two employees detail and display the detail of
employee having higher salary
*/

struct Employee
{
	char name[30];
	int age;
	long salary;
};
void main()
{
	struct Employee e1,e2;
	clrscr();
	printf("enter 1 ");
	scanf("%s",&e1.name);
	scanf("%d",&e1.age);
	scanf("%ld",&e1.salary);
	printf("enter 2 ");
	scanf("%s",&e2.name);
	scanf("%d",&e2.age);
	scanf("%ld",&e2.salary);
	if(e1.salary > e2.salary)
	{

	printf("%s : %d : %ld\n",e1.name,e1.age,e1.salary);
	}
	else
	{
	printf("%s : %d : %ld\n",e2.name,e2.age,e2.salary);
	}
	getch();
}

