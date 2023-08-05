/*define a structure named employee  having employee name , age ,
and salary as there data member

WAP to copy details of the employee into third employee among two employees
having higher salary
*/

struct Employee
{
	char name[30];
	int age;
	long salary;
};
void main()
{
	struct Employee e1,e2,e3;
	clrscr();
	printf("enter Employee 1 details in order name ,age and salary \n");
	scanf("%s",&e1.name);
	scanf("%d",&e1.age);
	scanf("%ld",&e1.salary);
	printf("enter Employee 2 details in order name ,age and salary \n");
	scanf("%s",&e2.name);
	scanf("%d",&e2.age);
	scanf("%ld",&e2.salary);
	if(e1.salary > e2.salary)
	{
		/*strcpy(e3.name,e1.name);
		e3.age = e1.age;
		e3.salary = e1.salary;*/
		e3=e1;
	}
	else
	{
		/*strcpy(e3.name,e2.name);
		e3.age = e2.age;
		e3.salary = e2.salary;*/
		e3=e2;
	}
	printf("name =%s : age=%d : salary =%ld\n",e3.name,e3.age,e3.salary);
	getch();
}

