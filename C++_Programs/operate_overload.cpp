#include<iostream>
using namespace std;

class test
{
	int a,x,y;
	public :

		void getdata()
		{
			a =0;
		}
		void operator ++()
		{
			++a;
		}
		void operator --()
		{
			--a;
		}
		void display()
		{
			cout << "a is :"<<a<<"\n";
		}
};
int main()
{
	test t;
	t.getdata();
	++t;
	t.display();
	--t;
	t.display();
	return 0;

}
