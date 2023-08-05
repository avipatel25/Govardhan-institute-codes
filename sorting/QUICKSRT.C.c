int split(int a[],int low,int high)
{
	int key=a[low];
	int p=low+1;
	int q=high;
	int t;
	while(p<=q)
	{
		while(p<=high && key>=a[p])
		{
			p++;
		}
		while(q>low && key<=a[q])
		{
			q--;
		}
		if(p<q)
		{
			t=a[p];
			a[p]=a[q];
			a[q]=t;
		}
	}
	if(q!=low)
	{
		t=a[low];
		a[low]=a[q];
		a[q]=t;
	}
	return q;
}
void sort(int a[],int low,int high)
{
	int q;
	if(low<high)
	{
		q=split(a,low,high);
		sort(a,low,q-1);
		sort(a,q+1,high);
	}
}
void main()
{
	int a[10];
	int i;
	clrscr();
	printf("ENTER THE DATA\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,0,9);
	printf("AFTER SORTING\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}