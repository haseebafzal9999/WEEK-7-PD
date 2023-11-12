#include <iostream>
using namespace std;
bool isprime(int number);
main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    cout<<isprime(number);
}
bool isprime(int number)
{
  if(number<=1)
{
  return false;
}
int count=0;
    for (int i = 2; i < number; i++)
    {


        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

