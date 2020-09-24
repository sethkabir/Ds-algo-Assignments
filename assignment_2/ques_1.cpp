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

void insert_beg()
{
	int x;
	cout<<"Enter the data: ";
	cin>>x;
	Node* temp = new Node();
	temp->data=x;
	temp->next=head;
	head=temp;	
}

void insert_end()
{
	int x;
	cout<<"Enter the data: ";
	cin>>x;
	Node* last_node = head;
	Node* temp = new Node();
	temp->data=x;
	temp->next=NULL;
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

void insert_pos()
{
	int n,x;
	cout<<"Enter what position you want data to be added: ";
	cin>>n;
	cout<<"Enter data: ";
	cin>>x;
	Node* pos_node1=head; // before temp pointer
	Node* pos_node2 = head->next; // after temp pointer
	Node* temp = new Node();
	temp->data=x;
	for(int i=0;i<n-2;i++)
	{
		pos_node1=pos_node1->next;
		pos_node2=pos_node2->next;
	}
	temp->next=pos_node2;
	pos_node1->next=temp;
	
}

void delete_beg()
{
	Node* temp = head;
	head=temp->next;
	delete temp;
}

void delete_end()
{
	Node* second_last_node = head;
	Node* temp = new Node();
	while(1)
	{
		if(second_last_node->next->next==NULL)
		{
			break;
		}
		second_last_node=second_last_node->next;
	}
	temp=second_last_node->next;
	second_last_node->next=NULL;
	delete temp;
}

void delete_pos()
{
	Node* second_last_node = head;
	Node* temp = new Node();
	int n;
	cout<<"Enter the position from where the data is to be deleted: ";
	cin>>n;
	for(int i=0;i<n-2;i++)
	{
		second_last_node=second_last_node->next;
	}
	temp=second_last_node->next;
	second_last_node->next=temp->next;
	delete temp;	
}

void search_node()
{
	Node* temp = head;
	int x,count=0;
	cout<<"Enter the value of the node to be searched: ";
	cin>>x;
	while(temp->next!=NULL)
	{
		count++;
		if(temp->data==x)
		{
			cout<<"Node with the value is present at position "<<count<<endl;
		}

		if(temp->next->next==NULL)
		{
			if(temp->next->data==x)
			{
				cout<<"Node with the value is present at position "<<count+1<<endl;
			}
		}
		temp=temp->next;
	}
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
}

int main()
{
	
	int c;
	while(1)
	{
		cout<<"----MENU----"<<endl;
		cout<<"Enter your choice"<<endl;
		cout<<"1. Create new list"<<endl;
		cout<<"2. Print list"<<endl;
		cout<<"3. Insert node at the begining"<<endl;
		cout<<"4. Insert node at the end"<<endl;
		cout<<"5. Insert node at nth position"<<endl;
		cout<<"6. Delete node at the beginning"<<endl;
		cout<<"7. Delete node at the end"<<endl;
		cout<<"8. Delete node at nth position"<<endl;
		cout<<"9. Search a node with value"<<endl;
		cout<<"0. Exit"<<endl;
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
				insert_beg();
				cout<<endl;
				break;
			case 4:
				insert_end();
				cout<<endl;
				break;
			case 5:
				insert_pos();
				cout<<endl;
				break;
			case 6:
				delete_beg();
				cout<<endl;
				break;
			case 7:
				delete_end();
				cout<<endl;
				break;
			case 8:
				delete_pos();
				cout<<endl;
				break;
			case 9:
				search_node();
				cout<<endl;
				break;
			default:
				exit(0);
		}
	}
	return 0;
}
