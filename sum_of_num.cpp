#include<bits/stdc++.h>
using namespace std;
int summation(int n)
{
	if(n==0)
	return 0;
	return n%10+summation(n/10);
}
int main()
{
	int n;
	cin>>n;
	cout<<summation(n);
}
