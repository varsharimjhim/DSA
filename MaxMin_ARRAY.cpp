// To find max and min element of the array
#include <iostream>
using namespace std;
void find_maxmin(int arr[], int N)
{
    int min =0;
    int max =0;
    if(arr[0] > arr[1])
    {
        max =0;
        min =1;
    }
    else
    {
        max =1;
        min =0;
    }
   for(int i =2; i<N;i++)
    {
      if(arr[max] < arr[i])
      {
        max =i;  
      }
      else if (arr[i] < arr[min])
      {
          min =i;
      }
    }
    cout<<"max = "<<arr[max]<< " "<<"min = "<< arr[min];
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
    find_maxmin(arr,N);
    return 0;
}