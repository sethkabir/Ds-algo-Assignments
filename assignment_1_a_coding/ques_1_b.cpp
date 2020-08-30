#include <iostream>
using namespace std;

int main()
{
    int m=0, n=0;
    cout<<"Enter the size of the square matrix:";
    cin>>m;
    int len=3*m-2;
    int D_ele[len];
    cout<<"Enter the elements for the matrix:"<<endl;
    for (int i=0; i<len;i++)
    {
        cin>>D_ele[i];
    }

    cout<<"\nThe matrix formed is:"<<endl;
    int k=0;
    for(int i=0;i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i-j<=1 && i-j>=-1)
            {
                cout<<D_ele[k++]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
