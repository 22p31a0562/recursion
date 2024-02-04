#include<bits/stdc++.h>
using namespace std;
int rev=0;
void reverse_num(int n)
{
	if(n==0)
	  return;
	rev=rev*10+(n%10);
	reverse_num(n/10);
}
int main()
{
	int n;
	cin>>n;
	reverse_num(n);
	cout<<rev;
}
