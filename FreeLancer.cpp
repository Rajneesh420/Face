#include<iostream>
using namespace std;
struct Node
{
	int start,end,time;
};
int maux(int a,int b)
{
	return a>b?a:b;
}
int overLap(Node *a,int n)
{
	for(int j=n-1;j>=0;j--)
	{
		if(a[j].end<=a[n].start)
			return j;
	}
	return -1;
}
int MaxOutput(Node *a,int n)
{
    int dp[n]; dp[0]=a[0].time;
    for(int i=1;i<n;i++)
    {
    	int k = overLap(a,i);
    	if(k>=0)
    	{
    		dp[i]=max(dp[i-1],dp[k]+a[i].time);
    	}
    	else
    	{
    		dp[i]=max(dp[i-1],a[i].time);
    	}
    }
    return dp[n-1];
}
void swap(Node *a,int i,int j)
{
	int t=a[i].end;
	a[i].end=a[j].end;
	a[j].end=t;

	t=a[i].start;
	a[i].start=a[j].start;
	a[j].start=t;

	t=a[i].time;
	a[i].time=a[j].time;
	a[j].time=t;
}
int Part(Node *a,int start,int end)
{
	int pivot = a[end].end;
	int partIndex = start;
	for(int i=start;i<end;i++)
	{
		if(a[i].end<=pivot)
		{
			swap(a,i,partIndex);
			partIndex++;
		}
	}
	swap(a,end,partIndex);
	return partIndex;
}
void Quick(Node a[],int start,int end)
{
   if(start<end)
   {
   	int part = Part(a,start,end);
   	Quick(a,start,part-1);
   	Quick(a,part+1,end);
   }
}
// void print(Node *a,int n)
// {
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<a[i].start<<" "<<a[i].end<<" "<<a[i].time<<endl;
// 	}
// }
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		Node a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i].start>>a[i].end>>a[i].time;
		}
		Quick(a,0,n-1);
		//print(a,n);
		cout<<MaxOutput(a,n)<<endl;
	}
	return 0;
}