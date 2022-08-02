#include<iostream>
using namespace std;
class volume
{
	public :
		float getvol(int a=4)
		{
			return (a * a * a);
		}

		float getvol(int r,int h)
		{
			return (3.14 * r * r *h);
		}
		float getvol(float r1 )
		{
			return ((4/3) * 3.14  * r1 * r1 * r1);
		}
};
int main()
{
	float r,r1,h,a;
	volume v;
	cout << "Enter side of cube:\n";
	cin >>a;
	cout<< "Volume of cube is:"<<v.getvol()<<"\n";

	cout << "Enter radius and height of cylinder:\n";
	cin >> r>>h;
	cout << "Volume of cylinder is :"<<v.getvol(r,h)<<"\n";

	cout<< "Enter radius of sphere:\n";
	cin >>r1;
	cout << "Volume of sphere is:"<<v.getvol(r1)<<"\n";

	return 0;
}
