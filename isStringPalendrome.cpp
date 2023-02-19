//Wap to check if the given string is palendrome or not.
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
	if(start >= end)
		return true;

	return ((str[start]==str[end]) && 
		     isPalindrome(str, start + 1, end - 1));
}

int main()
{
    string str;
    int start =0;

    cout<<"Enter Your String: ";
    cin>>str;
     int end = (str.size()-1);
    cout<<"\n You entered : "<<str;
    if(isPalindrome(str,start,end)== true)
    {
        cout<<"\n String is Palendrome";
    }
    else{
        cout<<"\n String is not Palendrome";
    }
}