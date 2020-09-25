//FOR DOUBLY LINKED LISTS
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
};
Node* head;
Node* tail;

void insert(int x)
{
	Node* temp = new Node();
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}
}

void create_list()
{
	int n,x;
	cout<<"Enter number of nodes: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data: ";
		cin>>x;
		insert(x);
	}
}

void insert_pos()
{
	int n,x;
	cout<<"Enter the position to insert the node to: ";
	cin>>n;
	cout<<"Enter data: ";
	cin>>x;
	Node* temp = new Node();
	temp->data=x;
	if(n==1)
	{
		head->prev=temp;
		temp->next=head;
		head=temp;
	}
	else
	{
		Node* pos_node = head;
		for(int i=0;i<n-2;i++)
		{
			pos_node=pos_node->next;
		}
		
		temp->next=pos_node->next;
		pos_node->next=temp;
		temp->prev=pos_node;
		if(temp->next!=NULL)
		{
			temp->next->prev=temp;
		}
	}
}

void delete_pos()
{
	int n;
	cout<<"Enter the position from which the node has to be removed: ";
	cin>>n;
	Node* temp = new Node();
	Node* pos_node = head;
	if(n==1)
	{
		temp=head;
		head=temp->next;
		delete temp;
	}
	else
	{
		for(int i=0;i<n-2;i++)
		{
			pos_node=pos_node->next;
		}
		temp=pos_node->next;
		pos_node->next=temp->next;
		if(temp->next!=NULL)
		{
			temp->next->prev=pos_node;
		}
		delete temp;
	}
}

void search_node()
{
	int x,count=0;
	cout<<"Enter the value to search: ";
	cin>>x;
	Node* temp = head;
	while(temp->next!=NULL)
	{
		count++;
		if(temp->data==x)
		{
			cout<<"Node is present at position: "<<count<<endl;
		}
		if(temp->next->next==NULL && temp->next->data==x)
		{
			cout<<"Node is present at position: "<<count+1<<endl;
		}
		temp=temp->next;
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
}

int main()
{
	int c;
	while(1)
	{
		cout<<"----MENU----"<<endl;
		cout<<"1. Create list"<<endl;
		cout<<"2. Print list"<<endl;
		cout<<"3. Insert node"<<endl;
		cout<<"4. Delete node"<<endl;
		cout<<"5. Search node"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>c;
		switch(c)
		{
			case 1:
				create_list();
				cout<<endl;
				break;
			case 2:
				print_list();
				cout<<endl;
				break;
			case 3:
				insert_pos();
				cout<<endl;
				break;
			case 4:
				delete_pos();
				cout<<endl;
				break;
			case 5:
				search_node();
				cout<<endl;
				break;
			default:
				exit(0);
		}
	}
	return 0;
}

