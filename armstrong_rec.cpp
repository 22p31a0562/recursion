#include<bits/stdc++.h>
using namespace std;
int armstrong(int n)
{
	if(n==0)
	return 0;
	return (n%10)*(n%10)*(n%10)+armstrong(n/10);
}
int main()
{
	int n;
	cin>>n;
	if(armstrong(n)==n)
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	
}
