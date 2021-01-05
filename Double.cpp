#include <iostream>
using namespace std; 
int Length(string a) 
{ 
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
} 
string Reverse(string a)
{
	int n=Length(a);
	int i=0,j=n-1;
	while(i<j)
	{
		char c=a[i]; a[i]=a[j]; a[j]=c;
		i++;
		j--;
	}
	return a;
}
string Cap(string a)
{
	int n=Length(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]>=97 and a[i]<=123)
		a[i]=a[i]-32;
	}
	return a;
}
int main() 
{ 
	string a;
	getline(cin,a);
	cout<<Length(a)<<endl;
	a=Reverse(a);
	cout<<"Reverse of string = "<<a<<endl;
	cout<<"After Converting into capital letter string would be ="<<Cap(a)<<endl;
	return 0;
} 
