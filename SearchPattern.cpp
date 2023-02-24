//Optimized way to solve this problem is to use Rabin-Karp Algorithm
//Naive Approach using Recursion
#include<bits/stdc++.h>
using namespace std;

void searchPattern( string s, string pat, int start)
{   int index =0 ,count =0, i =0, temp =0;
    int j =start;
    if(start == s.length() && count ==0)
    {
        cout<<"Pattern is not Present in the String";
        return;
    }
    while(i < pat.length())
    {
        if(s[j] == pat[i])
        {
            temp =0;
            i++;
            j++;
            count++;
        }
        else
        {
            temp = 1;
            break;
        }
    }
        if(temp == 1 || i == pat.length())
        {
            index = start;
        }
        if(count == pat.length())
        {
            cout<<index<<" ";
        }
        searchPattern(s,pat,start+1);
}

int main()
{
    string s,pat;
    cout<<"Enter the String: ";
    cin>>s;
    cout<<"Enter the Pattern: ";
    cin>>pat;
    searchPattern(s,pat,0);
}