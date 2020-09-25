#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head, *newnode, *tail;

//creating list
void create()
{
	head=0; 
	int choice=1;
	while(choice){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0)
	{
		head=tail=newnode;
	}	
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
	printf("To continue press 1 otherwise press 0: ");
	scanf("%d",&choice);}
}

//inserting at the beginning
	void insertBeg()
	{
		struct node *newnode;
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->prev=0;
		newnode->next=0;
		
		//updating pointers
		
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}

//inserting at the end	
	void insertEnd()
	{
		struct node *newnode;
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->prev=0;
		newnode->next=0;
		
		//updating pointers
		
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}

//display
	void display()
	{
		struct node *temp;
		temp = head;
		while(temp !=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
	
	
	int main()
	{
		int k;
		while(1){
		printf("\nx------Enter your choice-------x\n");
		printf("1. Create\n");
		printf("2. Display\n");
		printf("3. Insert at the beginning\n");
		printf("4. Insert at the end\n");
		printf("5. Quit\n");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				insertBeg();
				break;
			case 4:
				insertEnd();
				break;
			default:
				exit(0);
		}}
		return 0;
	}

