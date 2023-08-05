void main()
{
	int a[5]={10,20,30,40,50};
	int b[7]={11,22,23,33,44,48,49};
	int c[12];
	int i,j,k,l;
	clrscr();
	i=j=k=0;
	printf("array one:\n");
	for(l=0;l<5;l++)
	{
		printf("%d ",a[l]);
	}
	printf("\narray two:\n");
	for(l=0;l<7;l++)
	{
		printf("%d ",b[l]);
	}
	while(i<5 && j<7)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	while(i<5)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<7)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	printf("\nmerged array:\n");
	for(l=0;l<12;l++)
	{
		printf("%d ",c[l]);
	}
	getch();
}