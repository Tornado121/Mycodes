#include<iostream>
using namespace std;
class circle2;
class circle1
{
	public:
	int r1 , a1;
	public :
		void geta1()
		{
			cout << "Enter radius: ";
			cin >> r1;
			a1 = 3.14 * r1 * r1;
			cout << "Area of circle1 :"<<a1<<"\n";
		}
		friend void compare(circle1,circle2);
};
class circle2
{
	public:
	int r2 , a2;
		public :
			void geta2()
			{
				cout << "Enter radius ";
				cin >> r2;
				a2 = 3.14 * r2 * r2;
				cout << "Area of circle2 :"<<a2<<"\n";
			}
			friend void compare(circle1,circle2);
};
void compare(circle1 a ,circle2 b)
{
	if(a.a1 == b.a2)
	{
		cout << "Areas are equal\n";
	}
	else
	{
		cout << "Areas are different\n";
	}
}
int main()
{
	circle1 a;
	circle2 b;
	a.geta1();
	b.geta2();
	compare(a,b);
	return 0;
}
