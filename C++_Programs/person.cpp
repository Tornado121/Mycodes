#include<iostream>
#include<iomanip>
using namespace std;
class person
{

	long int num;
	char name[20],city[20];
	public :
		void getdata()
		{
			cout <<"Enter name ,city,contact number:\n";
			cin >> name >> city;
			cout << "Enter number";
			cin >> num;
		}
		void display()
		{
			cout << "Name :"<<name<<endl;
			cout << "City :"<<city<<endl;
			cout << "Contact Number:"<<setw(10)<<setfill('*')<<num;
		}
};

int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}
