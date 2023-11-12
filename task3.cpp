#include<iostream>
using namespace std;
 
main()
{
    int num,number;
    cout<<"Enter the number to Amplify: ";
    cin>>num;

    for(int a=1; a<=num; a++)
    {
        number = a;
        if(a%4==0)
        {
            number=number*10;
        }  
        cout<<number<<" , ";
    }
}