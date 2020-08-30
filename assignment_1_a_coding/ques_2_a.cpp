#include <iostream>
using namespace std;

int main()
{
    int rows, cols, n;
    cout<<"Enter number of rows:"<<endl;
    cin>>rows;
    cout<<"Enter number of cols:"<<endl;
    cin>>cols;
    int matrix[rows][cols];
    cout<<"Enter the elements of matrix:"<<endl;
    
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
			cout<<"Enter element "<<i<<j<<endl;   
            cin>>n;
            matrix[i][j] = n;
        }
    }
//printing the matrix
    cout<<"Matrix"<<endl;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//converting to sparse matrix
	cout<<"Sparse Matrix:"<<endl;
    int sparse_mat[30][30],k=1,count=0;
   
    for(int i=0; i<rows;i++)
    {   
        for(int j=0; j<cols; j++)
        {
            if(matrix[i][j] != 0)
        	{   
            	sparse_mat[k][0] = i;
            	sparse_mat[k][1] = j;
            	sparse_mat[k][2] = matrix[i][j];
            	k++;
            	count++;
        	}
        }
    }
     
	for(int i=0;i<3;i++)
	{
		sparse_mat[0][0]=rows;
		sparse_mat[0][1]=cols;
		sparse_mat[0][2]=count;	
	}
//printing the sparse matrix
    for(int i=0; i<k;i++)
    {
            cout<<sparse_mat[i][0]<<" ";
            cout<<sparse_mat[i][1]<<" ";
            cout<<sparse_mat[i][2]<<" "<<endl;
    }
    cout<<endl;
//converting to transpose
	cout<<"Transpose of the matrix:"<<endl;
    for(int i=0; i<k;i++)
    {
        int temp = sparse_mat[i][1];
        sparse_mat[i][1] = sparse_mat[i][0];
        sparse_mat[i][0] = temp;
    }
//printing the transpose
//printing the first row
    cout<<sparse_mat[0][0]<<" ";
    cout<<sparse_mat[0][1]<<" ";
    cout<<sparse_mat[0][2]<<" "<<endl;
    
//printing with sorting
	for(int j=0; j<count;j++)
    {
        for(int i=1;i<=count;i++)
        {
        	if(sparse_mat[i][0]==j)
        	{
        		cout<<sparse_mat[i][0]<<" ";
            	cout<<sparse_mat[i][1]<<" ";
            	cout<<sparse_mat[i][2]<<" "<<endl;
			}
		}
	}    
			
    return 0;
}
