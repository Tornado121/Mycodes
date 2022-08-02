#include<iostream>
using namespace std;
class second;
class first
{
	int x;
	public :
		void getx()
		{
			cout << "Enter value of x:\n";
			cin >>x;
		}
		friend void subtract(first,second);
};
class second
{
	int y;
	public:
		void gety()
		{
			cout << "Enter value of y:\n";
			cin >>y;
		}
		friend void subtract(first,second);
};
void subtract(first a,second b)
{
	int sub;
	sub = a.x - b.y;
	cout << "Subtraction is :"<<sub;
}
int main()
{
	first a;
	second b;
	a.getx();
	b.gety();
	subtract(a,b);
	return 0;
}
