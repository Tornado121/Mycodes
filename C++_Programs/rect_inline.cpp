#include<iostream>
using namespace std;
class rectangle
{
	public :
		inline int area(int l , int w)
		{
			return(l * w);
		}

		inline int peri(int l , int w)
		{
			return (2 * (l * w));
		}
};
int main()
{
	rectangle r;
	int len,wid;
	cout << "Enter length and width:\n";
	cin >> len >> wid;
	cout << "Area of rectangle is:";
       	cout<<r.area(len , wid);
	cout << "\nPerimeter of rectangle is:";
	cout <<r.peri(len , wid);
	return 0;

}
