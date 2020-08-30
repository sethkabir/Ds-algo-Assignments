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
        cout<<"Enter Row "<<i+1<<endl;
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

    int c=0, l=0, b=rows-1, r=col-1, dir=0;
    while(c<=b && l<=r)
    {
        if(dir == 0)
        {
            for(int i=l; i<=r; i++)
            {   
                cout<<matrix[c][i]<<" ";
            }
            c++;
        }
        else if(dir == 1)
        {
            for(int i=c; i<=b; i++)
            {
                cout<<matrix[i][r]<<" ";
            }
            r--;
        }
        else if(dir == 2)
        {
            for(int i=r; i>=l; i--)
            {
                cout<<matrix[b][i]<<" ";
            }
            b--;
        }
        else
        {
            for(int i=b; i>=c; i--)
            {
                cout<<matrix[i][l]<<" ";
            }
            l++;
        }
        dir = (dir+1)%4;
    }
    cout<<endl;
 
    
    return 0;
}
