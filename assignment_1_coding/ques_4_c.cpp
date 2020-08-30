#include<iostream>
using namespace std;

void display_mat_1(int mat_1[30][30],int r1,int c1)
{
	int i,j;
	cout<<"The matrix entered is"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<mat_1[i][j]<<" ";
		}
		cout<<endl;
	}
}

void trans_mat_1(int mat_1[30][30],int trans_mat[30][30],int r1, int c1)
{
	int i,j;
	cout<<"The transpose of the matrix is"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			trans_mat[j][i]=mat_1[i][j];
		}
	}
}

void display(int trans_mat[30][30], int r1, int c1){
	int i,j;
	for(j=0;j<c1;j++)
	{
		for(i=0;i<r1;i++)
		{
			cout<<trans_mat[j][i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int mat_1[30][30],trans_mat[30][30];
	int r1,c1,i,j;
	cout<<"Enter the number of rows and columns"<<endl;
	cin>>r1;
	cin>>c1;
	cout<<"Enter the elements of the matrix"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<"Enter element"<<i<<j<<endl;
			cin>>mat_1[i][j];
		}
	}
	
	display_mat_1(mat_1,r1,c1);
	trans_mat_1(mat_1,trans_mat,r1,c1);
	display(trans_mat,r1,c1);
	
	return 0;
}
