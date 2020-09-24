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


void delete_pos(int n)
{
	Node* second_last_node = head;
	Node* temp = new Node();
	if(n==1)
	{
			Node* temp = head;
			head=temp->next;
			delete temp;
	}
	else
	{
		for(int i=0;i<n-2;i++)
		{
			second_last_node=second_last_node->next;
		}
		temp=second_last_node->next;
		second_last_node->next=temp->next;
		delete temp;	
	}	
}


void create_list()
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
}


void print_list()
{
	Node* temp = head;
	cout<<"LIST: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void search_node(int x)
{
	Node* temp = head;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		if(temp->data==x)
		{
			delete_pos(count);
			temp=head;
			count=0;
			continue;
		}
		temp=temp->next;
	}
}


int main()
{
	int val;
	create_list();
	print_list();
	cout<<"Enter the value you want to delete: ";
	cin>>val;
	search_node(val);
	print_list();
	return 0;
}
