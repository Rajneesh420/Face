#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long Stick(int n)
{
	if(n==1)
		return 0;
	else
	{
		int x=n/2;
		if(n%2==0)
			return x*x+Stick(x)+Stick(x);
		else
			return x*(x+1)+ Stick(x)+Stick(x+1);
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<Stick(n)<<endl;
	}
	return 0;
}