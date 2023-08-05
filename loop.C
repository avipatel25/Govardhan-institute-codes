void main()
{
	int a[100],f=0,m=-1,i,j,y,s,e;
	clrscr();
	printf("enter the value of size =");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
	   scanf("%d",&a[i]);
	}
	printf("result:\n");
	for(i=0;i<s;i++)
	{
	   printf("%d\n",a[i]);
	}
	while(1)
	{
	printf("**************************\n");
	printf("press 1 to add element \n");
	printf("press 2 to remove element \n");
	printf("press 3 to push element \n");
	printf("press 4 to pop element \n");
	printf("press 5 to update element \n");
	printf("press 6 to eliminate element \n");
	printf("press 7 to find size of an array \n");
	printf("press 8 to sort the array values in ascending order \n");
	printf("press 0 to exit \n");
	printf("**************************\n");
	scanf("%d",&y);
	if(y==1)
	{
	   printf("enter the number to add =");
	   scanf("%d",&a[s]);
	   printf("required result:\n");
	   for(i=0;i<=s;i++)
	   {
	      printf("%d\n",a[i]);
	   }
	   s=s+1;
	}
	else if(y==2)
	{
	   s=s-1;
	   printf("required result:\n");
	   for(i=0;i<s;i++)
	   {
	      printf("%d\n",a[i]);
	   }
	}
	else if(y==3)
	{
	   printf("enter the position to add the number =");
	   scanf("%d",&j);
	   printf("enter the number to add  =");
	   scanf("%d",&e);
	   printf("required result:\n");
	   a[j]=e;
	   for(i=s;i>j;i--)
	   {
	      a[i]=a[i-1];
	      printf("%d\n",a[i]);
	   }
	   for(i=j-1;i>=0;i--)
	   {
	      printf("%d\n",a[i]);
	   }
	}
	else if(y==4)
	{
	   printf("enter the positin to remove the number =");
	   scanf("%d",&j);
	   printf("required result:\n");
	   for(i=0;i<j;i++)
	   {
		printf("%d\n",a[i]);
	   }
	   for(i=j;i<s-1;i++)
	   {
	     a[i]=a[i+1];
	     printf("%d\n",a[i]);
	   }
	}
	else if(y==5)
	{
	   printf("enter the number you want to replace =");
	   scanf("%d",&j);
	   printf("enter the number =");
	   scanf("%d",&e);
	   for(i=0;i<s;i++)
	   {
	      if(j==a[i])
	      {
		 f=1;
		 m=i;
		 break;
	      }
	   }
	   if(f==1)
	   {
	      a[m]=e;
	      printf("result:");
	      for(i=0;i<s;i++)
	      {
		 printf("%d\n",a[i]);
	      }
	   }
	   else
	   {
	      printf("invalid number");
	   }
	}
	else if(y==6)
	{
	   printf("enter the number you want to remove =");
	   scanf("%d",&j);
	   for(i=0;i<s;i++)
	   {
	      if(j==a[i])
	      {
		 f=1;
		 m=i;
		 break;
	      }
	   }
	   if(f==1)
	   {
	      for(i=0;i<m;i++)
	      {
		printf("%d\n",a[i]);
	      }
	      for(i=m;i<s-1;i++)
	      {
		  a[i]=a[i+1];
		  printf("%d\n",a[i]);
	      }
	   }
	   else
	   {
	      printf("invalid number");
	   }
	}
	else if(y==7)
	{
	   printf("size of an array = %d\n",s);
	}
	else if(y==8)
	{
	       /*	for(i=0;i<s;i++)
		{
		   for(j=i+1;j<s;j++)
		   {
		      if(a[i]>a[j])
		      {
			 e=a[i];
			 a[i]=a[j];
			 a[j]=e;
		      }
		   }
		}  */
		for(j=0;j<=s;j++)
		{
		   for(i=0;i<s;i++)
		   {
		      if(a[i]>a[i+1])
		      {
			 e=a[i];
			 a[i]=a[i+1];
			 a[i+1]=e;
		      }
		   }
		}
		for(i=0;i<s;i++)
		{
		    printf("%d\n",a[i]);
		}
	}
	else if(y==0)
	{
	   printf("bye!!!");
	   break;
	}
	else
	{
	   printf("invalid");
	   break;
	}
	}
	getch();
}