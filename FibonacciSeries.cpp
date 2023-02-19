/*Write a program to find the Fibonacci series of n where n>2 */
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0)
        return 0;

    if(n==1 || n==2)
       return 1;

    else
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i =0; i<n;i++)
    {
       cout<<fib(i)<<" ";
    }
    
}