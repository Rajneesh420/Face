#include<iostream>
using namespace std;
void Print(int *a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int Search(int *a,int n,int k)
{
	int start=0,end=n-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(a[mid]==k)
			return mid;
		else if(a[mid]<k)
			start=mid+1;
		else
			end=mid-1;
	}
	return -1;
}
void swap(int *a,int i,int j)
{
	int t=a[i];a[i]=a[j];
	a[j]=t;
}
int Part(int *a,int start,int end)
{
	int pivot=a[end];
	int part=start;
	for(int i=start;i<end;i++)
	{
		if(a[i]<pivot)
		{
			swap(a,i,part);
			part++;
		}
	}
	swap(a,part,end);
	return part;
}
void QuickSort(int *a,int start,int end)
{
    if(start<end)
    {
    	int pivot=Part(a,start,end);
    	QuickSort(a,start,pivot-1);
    	QuickSort(a,pivot+1,end);
    }
}
void sort(int *a,int n)

{
	QuickSort(a,0,n);
}
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) 
		cin>>a[i];
	sort(a,n-1);
	cout<<"Sorted array"<<endl;
	Print(a,n);
	int q; cin>>q;
	while(q--)
	{
		int k;
		cin>>k;
		int index=Search(a,n,k);
		cout<<index+1<<endl;
	}
	return 0;
}