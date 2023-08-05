#include<stdio.h>
typedef struct node
{
	struct node *prev;
	int info;
	struct node *next;
}node;

node *start=NULL;

node *createnode()
{
	node *t;
	t=(node *)malloc(sizeof(node));
	printf("ENTER THE VALUE =");
	scanf("%d",&t->info);

	t->prev=NULL;
	t->next=NULL;
	return t;
}
int count()
{
	int cnt=0;
	node *z;
       /*	if(start==NULL)
	{
		printf("%d nodes\n",cnt);
	}
	else
	{                                         */
		z=start;
		while(z!=NULL)
		{
			cnt++;
			z=z->next;
		}
	      //	printf("%d nodes\n",cnt);
//       	}
	return cnt;
}
void search()
{
	int f=-1;
	node *z;
	int val;
	if(start==NULL)
	{
		printf("\nEMPTY\n");
	}
	else
	{
		printf("ENTER THE VALUE TO BE SEARCHED =");
		scanf("%d",&val);
		z=start;
		while(z!=NULL)
		{
			if(val==z->info)
			{
				f=1;
				printf("\nFOUNDED\n");
				break;
			}
			z=z->next;
		}
		if(f==-1)
		{
			printf("\nNOT FOUNDED\n");
		}
	}
}
void pushbeg()
{
	node *t;
	t=createnode();
       /*	if(start==NULL)
	{
		start=t;
	}
	else
	{
		t->next=start;
		start=t;
	}                            */
	if(start!=NULL)
	{
		t->next=start;
		start->prev=t;
	}
	start=t;
}
void pushend()
{
	node *z,*t;
	t=createnode();
	if(start==NULL)
	{
		start=t;
	}
	else
	{
		z=start;
		while(z->next!=NULL)
		{
			z=z->next;
		}
		z->next=t;
		t->prev=z;
	}
}
void pushspl()
{
	int cnt;
	node *z,*t,*y;
	int x,f,pos;
	printf("ENTER THE POSITION\n");
	scanf("%d",&pos);
	cnt=count();
	if(pos==1)
	{
		pushbeg();
	}
	else if(pos<=0)
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
		t=createnode();
		z=start;
		f=1;
		while(f!=pos-1)
		{
			z=z->next;
			f++;
		}
		t->next=z->next;
		t->prev=z;
		y=z->next;
		z->next=t;
		y->prev=t;
	}
}
void popbeg()
{
	node *z;
	if(start==NULL)
	{
		printf("\nUNDEFLOW\n");
	}
       /*	else
	{
		if(start->next==NULL)
		{
			free(start);
			start=NULL;
		}
		else
		{
			start=start->next;
		}
	}                                          */
	else
	{
		printf("%d is deleted\n",start->info);
		z=start;
		start=start->next;
		start->prev=NULL;
		free(z);
	}
}
void popend()
{
	node *z,*t;
	if(start==NULL)
	{
		printf("\nEMPTY\n");
	}
	else
	{
		if(start->next==NULL)
		{
			printf("\n%d is deleted\n",start->info);
			free(start);
			start=NULL;
		}
		else
		{
			z=start;
			while(z->next!=NULL)
			{
				t=z;
				z=z->next;
			}
		       /* t=start;
		       while(t->next!=z)
		       {
				t=t->next;
		       }                                   */
		       t->next=NULL;
		       printf("\n%d is deleted\n",z->info);
		       free(z);
		}
	}
}
void popspl()
{
	int cnt;
	node *z,*t,*y;
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
			y=z->next;
			f++;
		}
		t->next=z->next;
		y->prev=t;
		printf("\n%d is deleted\n",z->info);
		free(z);
	}
}
void disp()
{
	node *z;
	if(start==NULL)
	{
		printf("\nEMPTY\n");
	}
	else
	{
		z=start;
		while(z!=NULL)
		{
			printf("%d ",z->info);
			z=z->next;
		}
		printf("\n");
	}
}
void disprev()
{
	node *z;
	if(start==NULL)
	{
		printf("\nEMPTY\n");
	}
	else
	{
		z=start;
		while(z->next!=NULL)
		{
			z=z->next;
		}
		while(z!=NULL)
		{
			printf("%d ",z->info);
			z=z->prev;
		}
		printf("\n");
	}
}
void main()
{
	int cnt,ch;
	clrscr();
	do
	{
		printf("=============================================\n");
		printf("1.  PUSH ELEMENT IN THE BEGINNING           |\n");
		printf("2.  PUSH ELEMENT IN THE ENDING              |\n");
		printf("3.  PUSH ELEMENT IN BETWEEN                 |\n");
		printf("4.  POP ELEMENT IN THE BEGINNING            |\n");
		printf("5.  POP ELEMENT IN THE ENDING               |\n");
		printf("6.  POP ELEMENT IN BETWEEN                  |\n");
		printf("7.  COUNT NO OF NODES                       |\n");
		printf("8.  SEARCH ELEMENT                          |\n");
		printf("9.  DISPLAY LINKED LIST                     |\n");
		printf("10. DISPLAY REVERSE LINKED LIST             |\n");
		printf("0.  EXIT                                    |\n");
		printf("=============================================\n");
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
			case 10:disprev();
				break;
			case 0:printf("\nBYE BYE!!!\n");
			       break;

			default:printf("\nINVALID CHOICE\n");
		}

	}while(ch!=0);
	getch();
}