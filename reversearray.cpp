// Reverse an given array
#include <iostream>
using namespace std;
void reverse_array(int arr[], int N)
{
    int i =0;
    int j =N-1; 
    int temp =0;
    while(i <j)
    {
       temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i++;
       j--;
    }
    cout<<"Reversed elements are";
    for(int k =0; k<N;k++)
    {
        cout<< arr[k] <<" ";
    }
}
int main() {
    // Write C++ code here
    int N;
    cout<<"Enter number of elements";
    cin>>N;
    int arr[N];
    cout<<"Enter array elements";
    for(int i =0; i<N;i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr,N);
    return 0;
}