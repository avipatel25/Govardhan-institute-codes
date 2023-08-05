void main()
{
	int a[10];
	int i,x,k,count=0;
	clrscr();
	printf("enter the data\n");
	scanf("%d",&x);
	while(x!=-1)
	{
		k=count-1;
		while(k>=0 && a[k]>x)
		{
			a[k+1]=a[k];
			k--;
		}
		a[k+1]=x;
		count++;
		if(count==10)
		{
			printf("overflow\n");
			break;
		}
		printf("enter data\n");
		scanf("%d",&x);
	}
	printf("after sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}