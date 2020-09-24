//stack using linked list
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};
Node* head;

void push(int data)
{
	Node* temp=new Node();
	
	if(!temp)
	{
		cout<<"Overflow"<<endl;;
		return;
	}
	
	temp->data=data;
	temp->next=head;
	head=temp;
}

int isEmpty()
{
	if(head == NULL)
	{
		cout<<"Empty stack"<<endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull()
{
	Node* temp = new Node();
	if(!temp)
	{
		cout<<"Overflow"<<endl;;
	}
}
void peek()
{
	if(!isEmpty())
	{
		cout<<head->data;
	}
	else
	{
		cout<<"Empty stack"<<endl;
	}
}

void pop()
{
	Node* temp;
	if (head==NULL)
	{
		cout<<"Empty"<<endl;
	}
	else
	{
		temp = head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}
}

void display()
{
	Node* temp;
	
	if (head == NULL)
	{
		cout<<"Empty"<<endl;
		return;
	}
	else
	{
		temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
}

int main()
{
	int c,val;
	while(1)
	{
		cout<<"----MENU----"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Display"<<endl;
		cout<<"3. Check wether the stack is empty"<<endl;
		cout<<"4. Check the top element"<<endl;
		cout<<"5. Pop"<<endl;
		cout<<"6. Quit"<<endl;
		cout<<"Enter your choice: ";
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"Enter the value to be pushed: ";
				cin>>val;
				push(val);
				cout<<endl;
				break;
			case 2:
				display();
				cout<<endl;
				break;
			case 3:
				isEmpty();
				cout<<endl;
				break;
			case 4:
				peek();
				cout<<endl;
				break;
			case 5:
				pop();
				cout<<endl;
				break;
			default:
				exit(0);
				break;	
		}	
	}
}
