#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *head = NULL;
void insertData(int a)
{
	node *temp = new node;
	temp -> data = a;
	temp -> next = head;
	head = temp;
}

void display()
{
	node *temp = head;
	while (temp)
	{
		cout<<temp->data<<" ";
		temp= temp->next;
	}
}

int main()
{
	int n,a;
	cout<<"Enter the total number of nodes";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data";
		cin>>a;
		insertData(a);
	}
	display();
}
