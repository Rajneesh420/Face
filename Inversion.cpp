#include<iostream>
using namespace std;
int Megre(int *a,int start,int mid,int end)
{
	int k=0;
	int count=0;
	int i=start;
	int j=mid+1;
	int b[end-start+1];
	while(i<=mid and j<=end)
	{
		if(a[i]>a[j])
			{
				b[k++]=a[j++];
				count++;
			}
		else
			b[k++]=a[i++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=end)
		b[k++]=a[j++];
	for(int i=start;i<=end;i++)
		a[i]=b[i-start];
	return count;
}
int MergeSort(int *a,int start,int end)
{
	int count=0;
	if(start<end)
	{
		int mid=start+(end-start)/2;
		count+=MergeSort(a,start,mid);
		count+=MergeSort(a,mid+1,end);
		count+=Megre(a,start,mid,end);
	}
	return count;
}
void Sort(int *a,int start,int end)
{
	int count = MergeSort(a,start,end);
	cout<<count<<endl;
}
int main()
{
	int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<vector<int> > a;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j]
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {

        }
    }

}
