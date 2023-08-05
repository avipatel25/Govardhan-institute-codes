void main()
{

	float a=5,*p,b=9,*q;
	/*
	clrscr();
	printf("value = %d address = %u",a,&a);
	p=&a;
	printf("\n%u \n%u",*&p,&p);*/
	clrscr();
	printf("%u %d\n",&a,a);
	printf("%u %d\n",&b,b);
	p=&a;
	q=&b;
	printf("p= %u q =%u ",p,q);
	printf("p = %d q = %d",*p,*q);
	printf("%d",*p+*q);
	printf("%u",p-q);
	getch();

}