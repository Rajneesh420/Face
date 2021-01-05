#include<iostream>
using namespace std;
class Test{
protected:
	int length , height;
public:
	virtual int getArea() = 0;
	void setLeigth(int h)
	{
		length=h;
	}
	void setHeight(int l)
	{
		height=l;
	}
};
class Triangel : public Test
{
public:
	int getArea()
	{
		return height*length;
	}
};
class Reactangle : public Test
{
public:
	int getArea()
	{
		return height*length;
	}
};
int main()
{
	Triangel t;
	Reactangle r;
	t.setHeight(90);
	t.setLeigth(89);
	cout<<"area of Triangel = "<<t.getArea()<<endl;
	r.setLeigth(78);
	r.setHeight(56);
	cout<<"area of Reactangle = "<<r.getArea()<<endl;
	return 0;
}