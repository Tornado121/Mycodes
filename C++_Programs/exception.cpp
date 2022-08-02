#include<iostream>
using namespace std;
class test
{
	int num,fact,i;
	public:
		void getnum()
		{
			cout << "Enter a number:\n";
			cin >> num;
			i=1,fact=1;
			try
			{
				if(num<0)
				{
					throw 0;
				}
				else if(num>=20)
				{
					throw 'x';
				}
				else
				{
					for(i=1 ; i<=num ; i++)
					{
						fact = fact * i;
					}
					cout << "Factorial of given number is:"<<fact; 
				}
			}

			catch(int a)
			{
				cout << "number Should be greater than 0\n";
			}
			catch(char b)
			{
				cout << "Number should be less than 20\n";
			}
				
		}
};
int main()
{
	test t;
	t.getnum();
	return 0;
}
