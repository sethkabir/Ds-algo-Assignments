#include<iostream>
using namespace std;

int search_number(int arr[],int n)
{
	int i,total;
	total=((n+1)*(n+2))/2;
	for(i=0;i<n;i++)
	{
		total=total-arr[i];
	}
	return total;
}

int main()
{
	int arr[]={1,2,3,4,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int missing_number=search_number(arr,n);
	cout<<"The missing number is "<<missing_number;
	return 0;
}
