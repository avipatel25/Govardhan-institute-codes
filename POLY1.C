#include<stdio.h>
typedef struct node
{
	int coef;
	int pwr;
	struct node *next;
}node;
node *createNode()
{
	node *t;
	t=(node *)malloc(sizeof(node));

	printf("\nENTER THE COEFFICIENT =");
	scanf("%d",&t->coef);
	printf("\nENTER THE POWER =");
	scanf("%d",&t->pwr);

	t->next=NULL;
	return t;
}
node *createpoly()
{
        node *start=NULL,*z,*t;
        char ch;
        do
        {
                t=createNode();
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
                }
                printf("\nDO YOU WANT TO ADD MORE TERMS (Y/N)? ");
                fflush(stdin);
                scanf("%c",&ch);
        }while(ch=='y' || ch=='Y');
        return start;
}
void disppoly(node *t)
{
        while(t->next!=NULL)
        {
                printf("%dX^%d +",t->coef,t->pwr);
                t=t->next;
        }
        printf("%dX^%d =0",t->coef,t->pwr);
}
node *appendNode(start,int coef,int pwr)
{
        node *z,*t;
        t=(node *)malloc(sizeof(node));
        t->coef=coef;
        t->pwr=pwr;
        t->next=NULL;

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
	}
        return start;
}
node *addpoly(node *t1,node *t2)
{
        node *start=NULL;
        while(t1!=NULL && t2!=NULL)
        {
                if(t1->coef > t2->coef)
                {
                        start=appendNode(start,t1->coef,t1->pwr);
                        t1=t1->next;
                }
                else if(t2->coef > t1->coef)
                {
                        start=appendNode(start,t2->coef,t2->pwr);
			t2=t2->next;
                }
                else
                {
                        start=appendNode(start,t1->coef+t2->coef,t1->pwr);
			t1=t1->next;
                        t2=t2->next;
                }
        }
        while(t1!=NULL)
        {
                start=appendNode(start,t1->coef,t1->pwr);
                t1=t1->next;
        }
        while(t2!=NULL)
        {
                start=appendNode(start,t2->coef,t2->pwr);
                t2=t2->next;
        }
        return start;
}
void main()
{
        node *poly1,*poly2,*poly3;
	clrscr();
	printf("\nEnter the FIRST Polynomial\n");
	poly1=createpoly();
	printf("\nEnter the SECOND Polynomial\n");
	poly2=createpoly();

        poly3=addpoly(poly1,poly2);

        printf("\nFIRST POLYNOMIAL\n");
        disppoly(poly1);
        printf("\nSECOND POLYNOMIAL\n");
	disppoly(poly2);
        printf("\nADDITION OF TWO POLYNOMIAL\n");
	disppoly(poly3);
	getch();
}