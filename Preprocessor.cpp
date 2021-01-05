#include<iostream>
using namespace std;
#define Max(a,b) a>b?a:b
int Get(int a,int b)
{
	return Max(a,b);
}
int main()
{
	int n,m;
	cin>>n>>m;
	int max=Get(n,m);
	cout<<"max = "<<max<<endl;
	return 0;
}