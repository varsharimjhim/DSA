//Wap to print 1 to n using recursion.
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
   if(n == 0)
    return; 
   print(n-1);
   cout<<n<<" ";
}
int main()
{
  int n;
  cout<<"\n Enter your Value";
  cin>>n;
  print(n);
}