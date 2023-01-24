//WAP to merge two sorted arrays
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter size";
    cin>>n>>m;

    int A[n], B[m], C[n+m];
    for(int i =0; i<n;i++)
    {
        cin>>A[i];
    }
    for(int i =0; i<n;i++)
    {
        cin>>B[i];
    }
    int i =0,j=0,k=0;
    while(i < n && j<m)
    {
        if(A[i] <= B[i])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
           C[k] = B[j];
           j++;
           k++;
        }
    }
    while(i != n)
    {
        C[k] = A[i];
        k++;
        i++;
    }
    while(j != m)
    {
        C[k] = A[j];
        k++;
        j++;
    }
     for(int h =0; h<n+m;h++)
    {
        cout<<C[h]<<" ";
    }

}