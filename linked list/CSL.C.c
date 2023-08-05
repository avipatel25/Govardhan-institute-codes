#include<stdio.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node node;

node *start=NULL;

node *createNode()
{
	node *t;
	t=(node *)malloc(sizeof(node));

	printf("ENTER THE DATA =");
	scanf("%d",&t->info);

	t->next=NULL;
	return t;
}
int count()
{
	int cnt=0;
	node *z;
	if(start==NULL)
   //		printf("\n%d nodes\n",cnt);
		return cnt;
	else
	{
		cnt=1;
		z=start;
		while(z->next!=start)
		{
			cnt++;
			z=z->next;
		}
	       //	printf("\n%d nodes\n",(cnt+1));
	}
	return cnt;
}
void pushbeg()
{
	node *z,*t;
	t=createNode();
	if(start==NULL)
	{
		start=t;
		start->next=start;
	}
	else
	{
		z=start;
		while(z->next!=start)
			z=z->next;
		t->next=start;
		z->next=t;
		start=t;
	}
}
void pushend()
{
	node *z,*t;
	t=createNode();
	if(start==NULL)
	{
		start=t;
		start->next=start;
	}
	else
	{
		z=start;
		while(z->next!=start)
			z=z->next;
		z->next=t;
		t->next=start;
	}
}
void popbeg()
{
	node *z,*b;
	if(start==NULL)
		printf("\nEMPTY\n");
	else
	{
		if(start->next==start)
		{
			printf("%d is deleted\n",start->info);
			free(start);
			start=NULL;
		}
		else
		{
			z=start;
			printf("%d is deleted\n",z->info);
			while(z->next!=start)
				z=z->next;
			b=start;
			start=start->next;
			z->next=start;
			free(b);
		}
	}
}
void popend()
{
	node *z,*b;
	if(start==NULL)
		printf("\nEMPTY");
	else
	{
		if(start->next==start)
		{
			printf("%d is deleted\n",start->info);
			free(start);
			start=NULL;
		}
		else
		{
			z=start;
			while(z->next!=start)
			{
				b=z;
				z=z->next;
			}
			printf("%d is deleted\n",z->info);
			b->next=start;
			free(z);
		}
	}
}
void pushspl()
{
	int cnt;
	node *z,*t;
	int x,f,pos;
	printf("ENTER THE POSITION\n");
	scanf("%d",&pos);
	cnt=count();
	if(pos==1)
	{
		pushbeg();
	}
	else if(pos<cnt)
	{
		printf("\nINVALID POSITION\n");
	}
	else if(pos>(cnt+1))
	{
		printf("\nPOSITION OUT OF RANGE\n");
	}
	else if(pos==(cnt+1))
	{
		pushend();
	}
	else
	{
		t=createNode();
		z=start;
		f=1;
		while(f!=pos-1)
		{
			z=z->next;
			f++;
		}
		t->next=z->next;
		z->next=t;
	}
}
void popspl()
{
	int cnt;
	node *z,*t;
	int f,pos;
	printf("ENTER THE POSITION\n");
	scanf("%d",&pos);
	cnt=count();
	if(pos==cnt)
	{
		popend();
	}
	else if(pos==1)
	{
		popbeg();
	}
	else if(pos<=0)
	{
		printf("\nINVALID POSITION\n");
	}
	else if(pos>cnt)
	{
		printf("\nPOSITION OUT OF RANGE\n");
	}
	else
	{
		z=start;
		f=1;
		while(f!=pos)
		{
			t=z;
			z=z->next;
			f++;
		}
		t->next=z->next;
		printf("\n%d is deleted\n",z->info);
		free(z);
	}
}
void search()
{
	int val,f=-1;
	node *z;
	if(start==NULL)
		printf("\nEMPTY\n");
	else
	{
		printf("ENTER THE VALUE =");
		scanf("%d",&val);

		z=start;
		if(val==z->info)
		{
			f=1;
			printf("\nfound\n");
		}
		while(z->next!=start)
		{
			z=z->next;
			if(val==z->info)
			{
				f=1;
				printf("\nfound\n");
				break;
			}
		}
		if(f==-1)
		{
			printf("\nnot found\n");
		}
	}
}
void disp()
{
	node *z;
	if(start==NULL)
		printf("\nEMPTY\n");
	else
	{
		printf("\nLIST GOES LIKE THIS\n");
		printf("<------------------\n");
		z=start;
		while(z->next!=start)
		{
			printf("%d ",z->info);
			z=z->next;
		}
		printf("%d ",z->info);
		printf("\n");
	}
}
void main()
{
	int cnt,ch;
	clrscr();
	do
	{
		printf("====================================\n");
		printf("1. PUSH ELEMENT IN THE BEGINNING   |\n");
		printf("2. PUSH ELEMENT IN THE ENDING      |\n");
		printf("3. PUSH ELEMENT IN BETWEEN         |\n");
		printf("4. POP ELEMENT IN THE BEGINNING    |\n");
		printf("5. POP ELEMENT IN THE ENDING       |\n");
		printf("6. POP ELEMENT IN BETWEEN          |\n");
		printf("7. COUNT NO OF NODES               |\n");
		printf("8. SEARCH ELEMENT                  |\n");
		printf("9. DISPLAY LINKED LIST             |\n");
		printf("0. EXIT                            |\n");
		printf("====================================\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:pushbeg();
			       break;
			case 2:pushend();
			       break;
			case 3:pushspl();
			       break;
			case 4:popbeg();
			       break;
			case 5:popend();
			       break;
			case 6:popspl();
			       break;
			case 7:cnt=count();
			       printf("\n%d nodes\n",cnt);
			       break;
			case 8:search();
			       break;
			case 9:disp();
			       break;
			case 0:printf("\nBYE BYE!!!\n");
			       break;

			default:printf("\nINVALID CHOICE\n");
		}

	}while(ch!=0);
	getch();
}
