#include<iostream>
#include<string>
using namespace std;

class PrintData
{
public:
	void Print(int a)
	{
		cout<<a<<endl;
	}
	void Print(float d)
	{
		cout<<d<<endl;
	}
	// void Print(string a)
	// {
	// 	cout<<a<<endl;
	// }
};
int mian()
{
	PrintData p;
	p.Print(5);
	p.Print(90.78f);
	//p.Print("Rajneesh");
	return 0;
} 