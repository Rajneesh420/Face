#include<iostream>
using namespace std;
double divide(int a,int b){
	if(b==0)
		throw "Division by zero";
	return (double)a/b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	try{
		double d = divide(a,b);
		cout<<d<<endl; 
	}catch(const char* msg)
	{
		cout<<msg<<endl;
	}
	return 0;
}