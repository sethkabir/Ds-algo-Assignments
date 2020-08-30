#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the size of square matrix:";
    cin>>m;
    int len = (m*(m+1))/2;
    int ele[len];
    cout<<"Enter the elements for row:"<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        ele[i] =n;
    }
    int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i <= j)
            {
                cout<<ele[k++]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
