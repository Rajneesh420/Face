#include<iostream>
using namespace std;
class Box
{
public:
	Box(){
		cout<<"Constructor called"<<endl;
	}
	~Box(){
		cout<<"Destructor called"<<endl;
	}
};
int main()
{
	Box* b=NULL;
	b=new Box[5];
	delete []b;
	return 0;
}