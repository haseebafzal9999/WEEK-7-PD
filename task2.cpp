#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n/2 ;i++)
    {
        for(int j=1; j<=(n/2)-i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=n/2; i>=1 ;i--)
    {
        for(int j=(n/2)-i; j>=1; j--)
        {
            cout<<" ";
        }
        for(int k=i; k>=1; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}