#include<iostream>
using namespace std;
class user
{

	public:
		inline int circle(int radius)
		{
			return (3.14*radius*radius);
		}
		inline int square(int side)
		{
			return (side * side);
		}
		inline int rect(int length,int breadth)
		{
			return (length * breadth);
		}
};
int main()
{
	int s,l,b;
	user u;
	cout << "Enter side:\n";
	cin >>s;
	cout << "Enter lenght and breadth of rectangle:\n";
	cin >>l>>b;
	cout << "Area of circle  is:"<<u.circle(s);
	cout << "\nArea of square is :"<<u.square(s)<<"\n";
	cout << "\nArea of rectangle is:"<<u.rect(l,b)<<"\n";
	return 0;
}
