#include<iostream>
using namespace std;
class shape
{
	protected:
	int di,b1,b2,h,A;
	public :
		void getdim()
		{
			cin >> di;
		}
		void getTrap()
		{
			cin >>b1>>b2>>h;
		}
		virtual float area()=0;
};
class circle:public shape
{
	public:
	float area()
	{
		return (3.14 * di * di);
	}
};
class square:public shape
{
	public:
	float area()
	{
		return(di * di);
	}
};
class trapezoid:public shape
{
	public:
	float area()
	{
		A=(b1 + b2)*h/2;
		return A;
	}
};
int main()
{
	cout << "Enter Radius:\n";
	circle c;
	c.getdim();
	cout << "Area of circle is:"<<c.area()<<"\n";
	cout << "Enter side for calculating area of square:\n";
	square s;
	s.getdim();
	cout << "Area of square is :"<<s.area()<<"\n";
	cout << "Enter base1 , base2 and height to calculate area of trapezium\n";
	trapezoid t;
	t.getTrap();
	cout << "Area of trapezoid is:"<<t.area()<<"\n";
	return 0;
}
