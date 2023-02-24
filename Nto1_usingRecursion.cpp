//Wap to print 1 to n using recursion.
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
   if(n == 0)
    return;
   cout<<n<<" ";
   print(n-1);
   
}
int main()
{
  int n;
  cout<<"\n Enter your Value";
  cin>>n;
  print(n);
}