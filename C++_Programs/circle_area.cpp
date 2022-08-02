#include<iostream>
using namespace std;
class circle
{
	public :
		float area(int r , float pi = 3.14)
		{
			return (pi * r * r);
		}
};
int main()
{
	circle c;
	float rad;
	cout << "Enter radius:\n";
	cin >> rad;
	cout << "Area of circle is:"<<c.area(rad);
	return 0;
}
