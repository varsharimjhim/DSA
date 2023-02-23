#include<bits/stdc++.h>
using namespace std;

int Ropecut(int n, int a, int b, int c)
{
    if(n == 0) return 0;
    if(n < 0) return -1;

    int count = max(Ropecut(n-a, a, b, c), 
	          max(Ropecut(n-b, a, b, c), 
	          Ropecut(n-c, a, b, c)));

    if (count == -1) return -1;

    return count + 1;


}

int main()
{
    int n,a,b,c;
    cout<<"\n Enter the Size of the Rope : ";
    cin>>n;
    cout<<"\n Enter three different Sizes : ";
    cin>>a>>b>>c;
    if(Ropecut(n,a,b,c) == -1)
    {
        cout<<"\n Rope Cannot be cut into the given length";
    }
    else
    {
        cout<<"\n Maximum pieces of the Rope are: "<<Ropecut(n,a,b,c);
    }
}