#include<iostream>
using namespace std;
main()
{
    int number;
    int sum=0;
    cout<<"Enter the number of Triangle: ";
    cin>>number;
    for(int a=1;a<=number;a++)
    {
      sum=sum+a;
    }
    cout<<"Dots in the triangel : "<<sum;
}