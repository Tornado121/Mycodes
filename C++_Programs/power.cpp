#include<iostream>
#include<math.h>
using namespace std;
class user
{
	public :
		float power(double m , int n)
		{
			return pow(m , n);	
		}

		int power(int m , int n)
		{
			return pow(m , n);
		}
};
int main()
{
	user u;
	int a,b,y;
	double x;
	int ch;
	cout << "Enter your choice:\n";
	cout << "1.M is double and N is int\n2.M an N both int\n";
	cin >> ch;
	if(ch == 1)
	{
		cout << "Enter value of x & y\n";
		cin >>x >>y;
		cout << "Power of m raise to n is :"<<u.power(x , y);
	}
	 else if(ch == 2)
        {
		cout << "Enter value of a and b\n";
		cin >> a>>b;
                cout << "Power of m raise to n is :"<<u.power(a , b);
        }
	 return 0;
}
