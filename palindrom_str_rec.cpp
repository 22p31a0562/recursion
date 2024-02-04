#include<bits/stdc++.h>
using namespace std;
bool palin(int i,int j,string s)
{
	if(i>=j) // we have checked all conditions
	return true;
	if(s[i]!=s[j]) // if i and j are not same then they are not palindrome
	return false;
	return palin(i+1,j-1,s);
}
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	if(palin(0,n-1,s))
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
}
