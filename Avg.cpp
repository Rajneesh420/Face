#include<iostream>
using namespace std;
void Megre(int *a,int *b,int start,int mid,int end)
{
	int k=0;
	int i=start;
	int j=mid+1;
	while(i<=mid and j<=end)
	{
		if(a[i]>a[j])
			b[k++]=a[j++];
		else
			b[k++]=a[i++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=end)
		b[k++]=a[j++];
	for(int i=start;i<=k;i++)
		a[i]=b[i];
}
void MergeSort(int *a,int *b,int start,int end)
{
	while(start<end)
	{
		int mid=start+(end-start)/2;
		MergeSort(a,b,start,mid);
		MergeSort(a,b,mid+1,end);
		Megre(a,b,start,mid,end);
	}
}
void Sort(int *a,int start,int end)
{
	int b[end+1];
	MergeSort(a,b,start,end);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	Sort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}