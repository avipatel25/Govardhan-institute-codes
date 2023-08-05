struct Employee
{
	int age;
	char name[20];
};
void main()
{
	struct Employee e1,e2;
	clrscr();
	printf("%d\n",sizeof(struct Employee));
	printf("%d\n",sizeof(e1));
	printf("%d\n",sizeof(e2));
	getch();
}