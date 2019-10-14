#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
	int data;
	struct Node *next;
}*last=NULL,*head=NULL;

typedef struct Node node;

node circ_ll(){
	node *NN;
	NN=(node *)malloc(sizeof(node));
	printf("Enter Data:");
	int data;
	scanf("%d",&data);
	NN->data=data;
	node *cptr=head;
	if(head==NULL)
	{
		NN->next=NN;
		head=NN;
		last=NN;
		printf("It begins at start.\n");
	}
	else if(head==last)
	{
		NN->next=head;
		cptr->next=NN;
		last=NN;
		printf("Two node.\n");
	}
	else
	{
		while(cptr!=last)
		{
			cptr=cptr->next;
		}
		NN->next=head;
		cptr->next=NN;
		last=NN;
		printf("Nodes attached at end.\n");
	}
}

node display(){
	system("CLS");
	printf("last->");
	node *cptr;
	cptr=head;
	if(cptr==last && cptr!=NULL)
	printf("%d->",cptr->data);
	else if(head==NULL)
	;
	else
	{
		while(cptr!=last)
		{
			printf("%d->",cptr->data);
			cptr=cptr->next;
		}
		printf("%d->",cptr->data);
	}
	printf("last\n");
}

int main()
{
	display();
	Other:
	printf("Circular Linked List-\n \
	1. To add a node.\n \
	2. display \n\
	Enter Choice:");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	circ_ll();
	if(choice==2)
	display();
	printf("Another Operation:\n \
	1 for yes. \n \
	0 for exit.\n");
	int option;
	scanf("%d",&option);
	if(option==1)
	goto Other;
}
