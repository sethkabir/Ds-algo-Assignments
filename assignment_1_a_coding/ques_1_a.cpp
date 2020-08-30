#include <iostream>
using namespace std;

int main()
{   
    int k,n;
    cout<<"Enter the size of the square matrix:"<<endl;
    cin>>k;

    cout<<"Enter the elements for the diagonal"<<endl;
    int D_ele[k];
    for(int i=0;i<k;i++)
    {
        cin>>n;
        D_ele[i] = n;
    }
    
    cout<<"\nThe matrix formed is"<<endl;
    for(int i=0;i<k;i++)
    {
        for(int j=0; j<k; j++)
        {
            if(i == j)
                cout<<D_ele[i]<<" ";
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
