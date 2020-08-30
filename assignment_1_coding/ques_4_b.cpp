#include<iostream>
using namespace std;

void display_mat_1(int mat_1[30][30],int r1,int c1)
{
	int i,j;
	cout<<"Matrix 1"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<mat_1[i][j]<<" ";
		}
		cout<<endl;
	}
}

void display_mat_2(int mat_2[30][30],int r2,int c2)
{
	int i,j;
	cout<<"Matrix 2"<<endl;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<mat_2[i][j]<<" ";
		}
		cout<<endl;
	}
}

void multiply_matrices(int mat_1[30][30],int mat_2[30][30],int mat_3[30][30],int r1,int c1,int r2,int c2){
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			mat_3[i][j]=0;
		}
	}
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(int k=0;k<c1;k++)
			{
				mat_3[i][j] += mat_1[i][k] * mat_2[k][j];
			}
		}
	}
}

void display_mat_3(int mat_3[30][30], int r1, int c2)
{
	int i,j;
	cout<<"The output matrix after multiplying matrices"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<mat_3[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int mat_1[30][30],mat_2[30][30],mat_3[30][30];
	int i,j,r1,r2,c1,c2;
	
	cout<<"Enter the rows and columns for matrix 1"<<endl;
	cin>>r1;
	cin>>c1;
	cout<<"Enter the rows and columns for matrix 2"<<endl;
	cin>>r2;
	cin>>c2;
	if(c1!=r2)
	{
		cout<<"Multiplication Invalid"<<endl;
	}
	else{
		cout<<"Enter the elements for matrix 1"<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cout<<"Element"<<i<<j<<endl;
				cin>>mat_1[i][j];
			}
		}
		cout<<"Enter the elements for matrix 2"<<endl;
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				cout<<"Element"<<i<<j<<endl;
				cin>>mat_2[i][j];
			}
		}
		display_mat_1(mat_1,r1,c1);
		display_mat_2(mat_2,r2,c2);
		multiply_matrices(mat_1,mat_2,mat_3,r1,c1,r2,c2);
		display_mat_3(mat_3,r1,c2);
	}
	return 0;
}
