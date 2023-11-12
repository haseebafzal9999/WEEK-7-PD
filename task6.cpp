#include<iostream>
using namespace std;
bool isprime(int number);
int primorial(int n);
main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
   cout<< primorial(n);
}
bool isprime(int number)
{
    for (int a = 2; a < number; a++)
    {

        if (number % a == 0)
        {
            return false;
        }
    }
    return true;
}
int primorial(int n)
{
    int num= 2;
    int product =1;
    while(num != 0 )
    {
    if(isprime(number))
    {
        product=product*num;
    }
    }

}
