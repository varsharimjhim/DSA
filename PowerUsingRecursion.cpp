/*You are given two numbers n and p. You need to find n^p*/

#include<bits/stdc++.h>
using namespace std;

double power(double n, int p)
{
    if(p == 0) return 1;
    return n * power(n, p-1);
    
}

int main()
{
    double n,p;
    cout<<"Enter base";
    cin>>n;
    cout<<"Enter exponential";
    cin>>p;
    cout<<power(n,p);
}
