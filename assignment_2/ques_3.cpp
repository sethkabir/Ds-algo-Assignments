#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};
Node* head;


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

void middle_node()
{
	Node* last_node = head;
	Node* mid_node = head;
	int count=0;
	while(1)
	{
		if(last_node->next==NULL)
		{
			break;
		}
		last_node=last_node->next;
		count++;
	}
	int i=0;
	while(i<count/2)
	{
		mid_node=mid_node->next;
		i++;
	}
	cout<<"Mid value for ";
	print_list();
	cout<<" is: "<<mid_node->data<<endl;
}

void insert(int x)
{
	Node* temp = new Node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		cout<<"Middle data: "<<temp->data<<endl;
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
		middle_node();
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

int main()
{
	create_list();
	return 0;
}
