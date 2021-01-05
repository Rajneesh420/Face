#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,c; 
	cin>>t;
	c=t;
	int a[t],b[t];
	int i=0,j=0;
	while(t--)
	{
        int x, y;
        cin>>x>>y;
        a[i]=x;i++;
        b[j]=y;j++;
	}
	sort(a,a+c);
	sort(b,b+c);
	int cost=0,cost2=0;
	for(int k=1;k<c;k++){
		cost = cost + (a[k]-a[k-1]);
		cost2 = cost2 + (b[k]-b[k-1]);
	}
	cout<<min(cost,cost2)<<endl;
	return 0;

}