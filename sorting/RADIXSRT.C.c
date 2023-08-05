int max(int arr[],int size)
{
	int m=arr[0];
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]>m)
		{
			m=arr[i];
		}
	}
	return m;
}
int count(int num)
{
	int cnt=0;
	while(num!=0)
	{
		cnt++;
		num=num/10;
	}
	return cnt;
}
void sort(int arr[],int size)
{
	int cnt,m,t,pass,i,j,k,r,d;
	int mat[10][10];
	int c[10];
	m=max(arr,size);
	cnt=count(m);
	d=1;
	for(pass=1;pass<=cnt;pass++)
	{
		for(i=0;i<size;i++)
		{
			c[i]=0;
		}
		for(i=0;i<size;i++)
		{
			r=(arr[i]/d)%10;
			mat[c[r]][r]=arr[i];
			c[r]++;
		}
		k=0;
		for(j=0;j<=9;j++)
		{
			for(i=0;i<c[j];i++)
			{
				arr[k]=mat[i][j];
				k++;
			}
		}
		d=d*10;
	}
}
void main()
{
	int arr[10],i;
	clrscr();
	printf("enter values:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,10);
	printf("after sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
}
