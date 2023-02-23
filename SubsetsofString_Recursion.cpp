#include<bits/stdc++.h>
using namespace std;

//Recusive function to generated Subsets

void printsubset(string s, string curr, int i)
{

    if(i == s.length())
    {
        cout<<"['"<<curr<<" ']"<<" ";
        return ;
    }
    printsubset(s,curr,i+1);
    printsubset(s,curr + s[i] , i+1);
}
int main()
{
    string s;
    cout<<"\n Enter String : ";
    cin>>s;
    cout<<"\n You Entered : "<<s;
    cout<<"\n Subsets of the entered Strings are: ";
    printsubset(s," ",0);
    return 0;

}