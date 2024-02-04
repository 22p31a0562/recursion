#include<bits/stdc++.h>
using namespace std;
void tab(int i,int n,int r)
{
	if(i>r)
	return ;
	cout<<n<<"x"<<" "<<i<<" "<<"="<<n*i<<endl;
	tab(i+1,n,r);
	//cout<<n<<"x"<<" "<<i<<" "<<"="<<n*i<<endl;
}
int main()
{
	tab(1,2,20);
}
