#include<iostream>
using namespace std;
void TOH(int n, char A, char B, char C)
{
    if(n == 1)
    {
        cout<<"Move 1 From "<<A<<" to "<<C<<"\n";
        return;
    }
    TOH(n-1,A,C,B);
    cout<<"Move "<<n<<" From "<<A<<" to "<<C<<"\n";
    TOH(n-1,B,A,C);
    
}

int main()
{
    int n;
    cout<<"\n Enter the Number of Disc : ";
    cin>>n;
    TOH(n,'A','B','C');
}