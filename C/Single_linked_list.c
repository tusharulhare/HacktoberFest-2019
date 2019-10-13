#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *link;
} *head,*p,*x;

void main()
{
	int d;
	char c;
	clrscr();
	head=(struct node*)malloc(sizeof(struct node));
	head->link= NULL;
	p=head;
	do
	{
		printf("data: ");
		scanf("%d",&d);
		x=(struct node*)malloc(sizeof(struct node));
		x->data=d;
		x->link=p->link;
		p->link=x;
		p=x;
		printf("continue?");
		scanf(" %c",&c);
	}while(c!='n');
	p=head->link;
	while(p!= NULL)
	{
		printf("\n %d",p->data);
		p=p->link;
	}
	getch();
}
