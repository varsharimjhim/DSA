// There are N people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. 
//Given the total number of persons N and a number k which indicates that k-1 persons are skipped and the kth person is killed in a circle. The task is to choose the person in the initial circle that survives.

#include<bits/stdc++.h>
using namespace std;

int surviver(int n , int k)
{
    if(n == 1)
    {
        return 0;
    }
    return ((surviver(n-1,k)+k)% n);
}

int main()
{
    int n,k;
    cout<<"\n Enter the number of person present in the circle : ";
    cin>>n;
    cout<<"\n Enter the number of Person you want to skip in 1 iteration :";
    cin>>k;
    cout<<"Surviver is at "<<surviver(n,k)<<" position";
    return 0;
}