void main()
{
	int a,b;
	clrscr();
	printf("value of a =");
	scanf("%d",&a);
	printf("value of b =");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of new a is %d\n",a);
	printf("value of new b is %d",b);
	getch();
}
