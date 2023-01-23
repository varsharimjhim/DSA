//find the occurrence of first peak element (Peak element is an element which is greater than its neighbour elements)
#include <iostream>
using namespace std;
int peakelement(int arr[], int N)
{
   for(int i =0; i<N;i++)
    {
        if(i==0)
        {
            if(arr[i]> arr[i+1])
            return i;
        }
        else if (i == N-1)
        {
            if(arr[i] > arr[i-1])
            return i;
        }
        else
        {
            if(arr[i] > arr[i-1]  && arr[i] > arr[i+1])
            return i;
        }
    }  
}
int main() {
    // Write C++ code here
    int N;
    cin>>N;
    int arr[N];
    for(int i =0; i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<peakelement(arr,N);
    return 0;
}