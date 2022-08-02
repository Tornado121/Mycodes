#include<iostream>
using namespace std;
class test
{
	int num,i;
	public:
		void factor()
		{
			cout << "Enter number:\n";
			cin >> num;

			if(num <0)
			{
				cout << "Please enter positive number!\n";
			}
			else
			{	cout << "Factors Of given number are:\n";
				for(i = 2 ; i <= num ; i++)
				{
					if(num % i==0)
					{
						cout << i;
						cout << "\n";
					}
				}
			}
		}
};
int main()
{
	test t;
	t.factor();
	return 0;
}
