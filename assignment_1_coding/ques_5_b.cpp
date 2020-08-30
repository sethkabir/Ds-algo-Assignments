//This is binary search implementation
#include<iostream>
using namespace std;

int binary_search(int arr[],int first,int last,int x)
{
	int k;
	if(last>=1)
	{
		int mid=(first+(last-1))/2;
		if(arr[mid]==x)
		{
			k=1;
			return k;
		}
		if(arr[mid]>x)
		{
			binary_search(arr,first,mid-1,x);
		}
		if(arr[mid]<x)
		{
			binary_search(arr,mid+1,last,x);
		}
	}
}

int main(){
	int arr[]= {2,4,8,13,38};
	int x=13;
	int n=sizeof(arr)/sizeof(arr[0]);
	int num=binary_search(arr,0,n-1,x);
	(num==1)?cout<<"Number found" : cout<<"Number not found";
	return 0;
}
