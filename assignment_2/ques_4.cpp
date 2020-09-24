#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};
Node* head;

void insert(int x)
{
	Node* temp = new Node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		Node* last_node = head;
		while(1)
		{
			if(last_node->next==NULL)
			{
				break;
			}
			last_node=last_node->next;
		}
		last_node->next=temp;
	}
}

int create_list()
{
	int n,x;
	cout<<"Enter the number of nodes: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter data: ";
		cin>>x;
		insert(x);
	}
	return 0;
}

void reverse_list()
{
	Node* current =head;
	Node* prev=NULL;
	Node* next=NULL;
	
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;	
	}	
	head=prev;
}

void print_list()
{
	Node* temp=head;
	cout<<"LIST: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	create_list();
	print_list();
	reverse_list();
	print_list();
	return 0;	
}
