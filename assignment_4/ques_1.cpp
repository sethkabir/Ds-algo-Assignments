//stack using array
#include<iostream>
using namespace std;

int stack_arr[20];
int initial = -1;

int isFull()
{
	if(initial == 19)
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
	if(initial==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int val)
{
	if( isFull() )
	{
		cout<<"Overflow"<<val;
	}
	initial = initial+1;
	stack_arr[initial]=val;
}

void display()
{
	if( isEmpty() )
	{
		cout<<"Empty"<<endl;
		return;
	}
	cout<<"Elements: ";
	for(int i=initial; i>=0;i--)
	{
		cout<<stack_arr[i]<<" ";
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
		cout<<"3. Quit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"Enter the valueto be pushed: ";
				cin>>val;
				push(val);
				cout<<endl;
				break;
			case 2:
				display();
				cout<<endl;
				break;
			default:
				exit(0);
		}
	}
}
