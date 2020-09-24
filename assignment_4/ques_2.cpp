#include<iostream>
using namespace std;
int head=-1,stack_arr[100];

int isFull()
{
	if(head == 19)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}

int isEmpty()
{
	if(head==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(char val)
{
	if( isFull() )
	{
		cout<<"Overflow"<<val;
	}
	head = head+1;
	stack_arr[head]=val;
}

void display()
{
	if( isEmpty() )
	{
		cout<<"Empty"<<endl;
		return;
	}
	cout<<"Elements: ";
	for(int i=head; i>=0;i--)
	{
		cout<<(char)stack_arr[i];
	}
}


int main()
{
	int len;
	string s;
	cout<<"Enter the string: "<<endl;
	getline(cin,s);
	len=s.size();
	for(int i=0;i<len;i++)
	{
		push(s[i]);
	}
	display();
	return 0; 
}
