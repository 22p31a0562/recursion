#include<bits/stdc++.h>
using namespace std;
void bcd(string s,int start,int end)
{
    if(start>=end)
	{
	   cout<<s<<endl;
	   return;	
	}
	for(int i=start;i<=end;i++)
	{
	  swap(s[start],s[i]);
	  bcd(s,start+1,end);
	  swap(s[start],s[i]);	
	}	
}
int main()
{
	string s;
	cin>>s;
	bcd(s,0,s.size()-1);
}
