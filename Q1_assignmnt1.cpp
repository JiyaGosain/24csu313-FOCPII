//Q1. Number manupulation and prime numbers.
//Write a C++ code to take a positive number n as input and:
//(i). Check whether n is a prime number.
//(ii). If it is not prime number, find all its factors.
//(iii). If it is prime, find the next prime number greater than n.

#include<iostream>
using namespace std;

int prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int next_prime(int num)
{
    num++;
    while(!prime(num))
    {
        num++;
    }
    return num;

}
void factors(int num)
{
    cout<<"Factors of "<<num<<" are: ";
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
        // if(i!=num/i)
        // cout<<num/i<<" ";
    }
            cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;

    if(n<=0)
    cout<<"Please enter a positive number.";

        if(prime(n))
        {
            cout<<"It is a prime number"<<endl;
            cout<<"Next prime number is: "<<next_prime(n)<<endl;
        }
        else
        {
            cout<<"It is not a prime number"<<endl;
            factors(n);
        }
    return 0;
}