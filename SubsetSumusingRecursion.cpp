//WAP to count the number of subsets of an array whose sum is equal to the given sum.
#include<bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
   if(n == 0)
   return (sum == 0 )? 1:0;

   return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}

int main()
{
    int n,sum;
    cout<<"\n Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"\n Enter the Array elements";
    for(int i =0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n Enter the total Sum : ";
    cin>>sum; 
    cout<<"\n Total Count of the Subsets are : "<<countSubsets(arr,n,sum);
}