#include<bits/stdc++.h>
using namespace std;
int gcd(int i,int a,int b)
{
	if(a%i==0 && b%i==0)
	return i;
	return gcd(i-1,a,b);
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(b>a){
		swap(a,b);
	}
	cout<<gcd(a,a,b);
}
