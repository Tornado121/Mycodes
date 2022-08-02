#include<iostream>
#include<math.h>
using namespace std;
class interest
{
	public:
	inline	int simple(int p,int r,int t)
		{
			return (p * r * t)/100;
		}
	inline int compound(int p2, int r2, int t2)
	{
			return (p2 * pow((1+r2/100),t2));
	}
		
};
int main()
{
	int T=2,P=10000,R=5;

	interest obj;
	cout << "For Calculating Simple Interest\n";
                //      cout << "Enter a principal value:\n";
                //      cin >> P;
                //      cout << "Enter a time value:\n";
                //      cin >> T;
                //      cout << "Enter Rate:\n";
                //      cin >> R;
                       
                        cout << "Simple Interest Is :"<<obj.simple(P,R,T)<<"\n";
                       
                        cout << "Compound Interest Is:"<<obj.compound(P,R,T)<<"\n";

//	obj.simple();

	return 0;
}
