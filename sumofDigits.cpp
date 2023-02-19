//Wap to calculate the sum of digits using recursion.
#include<bits/stdc++.h>
using namespace std;
int calsum(int n)
{
    if (n == 0)
    return 0;

    else
    {
        return (calsum(n/10)+ n%10);
    }
}
int main()
{
    int n;
    cout<<"\n Enter your value";
    cin>>n;
    cout<<"\n Calculated sum of your digit is : "<<calsum(n);
}