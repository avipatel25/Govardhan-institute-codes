void main()
{
	char arr[5][5];
	char temp[5];
	int i,j,k,l;
	clrscr();
	printf("Enter the character in array :\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",&arr[i]);
	}
	printf("sorting...\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(stricmp(arr[j],arr[j+1])>0)
			{
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
			}
			for(l=0;l<5;l++)
			{
				printf("%s ",arr[l]);
			}
			printf("\n");
			getch();
		}
		for(k=0;k<5;k++)
		{
			printf("%s ",arr[k]);
		}
		printf("\n");
		getch();
	}
	printf("AFTER SORTING\n");
	for(i=0;i<5;i++)
	{
		printf(" %s ",arr[i]);
	}
	getch();
}