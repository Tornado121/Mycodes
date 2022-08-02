#include<iostream>
using namespace std;

class test
{
	int num,i,p=0;

	public :
		void getNum()
		{
			cout << "Enter A Number:";
			cin >>num;
			
			for(i =0 ; i<num ; i++)

			{
				if(num%i==0)
				{
					p = 1;
					break;
				}
			}
			if(p = 0)
			{
				cout << "Number is prime\n";
			}
			else
			{
				cout << "Not Prime\n";
			}
		}
};

int main()
{
	test t;
	t.getNum();
	return 0;
}
