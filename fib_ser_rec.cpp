#include<bits/stdc++.h>
using namespace std;
int fib_ser(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	return fib_ser(n-1)+fib_ser(n-2);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<fib_ser(i)<<endl;
	}
}
