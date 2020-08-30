#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int n;
	int i,j,k;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	cout<<"Enter the elements for the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	cout<<"The array after deleting the duplicate elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
