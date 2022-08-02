#include<iostream>
using namespace std;
class Time
{
	int hh,mm,ss,seconds;
	public:
		void getT()
		{
			cout << "Enter Time";
			cout <<"\n Enter hours:\n";
			cin >> hh;
			cout <<"Enter minutes:\n";
			cin >>mm;
			cout << "Enter seconds:\n";
			cin >> ss;
		}
		void getS()
		{
			seconds = hh * 3600 + mm * 60 + ss;
			cout << "Time in seconds :"<<seconds;
		}
};

int main()
{
	Time o;
	o.getT();
	o.getS();
	return 0;
}
