#include <iostream>
using namespace std;

int main()
{
    int rows,col,n;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>col;
    int matrix[rows][col];
    cout<<"Enter the elements:"<<endl;
    
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter elements for row "<<i+1<<endl;
        for(int j=0; j<col; j++)
        {   
            cin>>n;
            matrix[i][j] = n;
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The matrix formed is:"<<endl;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<rows; i++)
    {
        int min = matrix[i][0], col_index=0;
        for(int j=1; j<col; j++)
        {
            if(min> matrix[i][j])
            {
                min = matrix[i][j];
                col_index = j;
            }
        }

        int k=0;
        for(k; k<rows; k++)
        {
            if(min< matrix[k][col_index])
            {
                break;
            }
        }

        if(k == col)
        {
            cout <<"Saddle Point is present and its value is:"<< min<<endl;
        }
    }
    
    return 0;
}
