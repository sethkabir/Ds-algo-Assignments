//This is the linear search implementation
#include<iostream>
using namespace std;

int main()
{
	int arr[] ={2,4,8,13,38};
	int i,check=0;
	int x = 13;
	int n= sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			check=1;
			break;
		}
		else
		{
			check=0;
		}
	}
	(check=1)?cout<<"Number found" :cout<<"Number not found";
	return 0;
}
