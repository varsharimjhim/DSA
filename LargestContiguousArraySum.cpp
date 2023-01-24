//Program to find the largest Contiguous Array sum
//Approach : Use Kadane’s algorithm

#include<iostream>
#include<climits>
using namespace std;

int largestSum(int A[], int n)
{
    int wholeSum = INT_MIN;
    int SumTillHere = 0;
    for(int i =0; i<n;i++)
    {
        SumTillHere += A[i];
        if(SumTillHere > wholeSum)
        {
           wholeSum = SumTillHere;
        }
        if(SumTillHere < 0 )
        {
            SumTillHere =0;
        }
    }
    return wholeSum;
}
int main()
{
    int n;
    cout<<"Enter Size";
    cin>>n;
    int A[n];
    for(int i =0; i<n;i++)
    {
        cin>>A[i];
    }
    cout<<largestSum(A,n);
    return 0;
}