#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin >> n;
	int arr[n];
	int i;
	cout<<"Enter the elements of the array"<<endl;
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout<<"The reversed array is"<<endl;
	for(i = n-1; i >= 0; i--)
	{	
		cout<<arr[i]<<endl;
	}
	return 0;
}
