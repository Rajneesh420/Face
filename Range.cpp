#include<iostream>
using namespace std;
int aa=1000000007;
int Sum(int *a,int n,int m,int k)
{
  int count=0,sum=0;
  while(m--)
  {
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      if(sum<=k)
      count++;
      else if(a[i]<=k)
      {
        sum=a[i];
        count++;
      }
      else
      sum=0;
    }
    count=count%aa;
  }
  return count%aa;
  
}
int main() {
  int t; cin>>t;
  while(t--)
  {
    int n,m; 
    int k;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int result=Sum(a,n,m,k);
    cout<<result<<endl;
  }
  return 0;
}