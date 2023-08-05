void main()
{
	int arr[5];
	int i,j,k,count=0,x;
	char ask[3];

	clrscr();

	printf("Enter the values =\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the number to be searched =");
	scanf("%d",&x);

	for(i=0;i<5;i++)
	{
		if(x==arr[i])
		{
			count += 1;
			printf("\nposition of %d is at %d\n",x,i+1);
		}
	}

	if(count==0)
	{
		printf("number not found\n");
		getch();
		return;
	}
	else
		printf("number found %d times\n",count);

	printf("Enter the new number to replace existing number=");
	scanf("%d",&j);
	printf("DO YOU WANT TO REPLACE ALL FOUNDED NUMBERS???\n");
	scanf("%s",&ask);

	if(strcmp(ask,"yes")==0)
	{
		for(i=0;i<5;i++)
		{
			if(x==arr[i])
			{
				arr[i]=j;
			}
		}
	}
	else
	{
		printf("Enter the position to be replaced=");
		scanf("%d",&k);
		if(arr[k-1]==x)
			arr[k-1]=j;
		else
		{
			printf("number doesn't match the position of founded number\n");
			getch();
			return;
		}
	}

	printf("The final array is :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}

	getch();
}