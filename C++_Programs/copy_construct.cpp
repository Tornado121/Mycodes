#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class part
{
	int pid;
	float pprice;
	char pname[20];
	public :
		part(int id , float price , char name[20])
		{
			pid = id;
			strcpy(pname,name);
			pprice= price;
		}
		part(part &s)
		{
			pid = s.pid;
			pprice = s.pprice;
			strcpy(pname , s.pname);
		}
		void print()
		{
			cout << "Id = "<<pid<<"\n";
			cout << "Price = "<<setprecision(3)<<pprice<<"\n";
			cout <<"Name ="<<pname<<"\n";
		}
};
int main()
{
	int id;
	float p;
	char nm[30];
	cout << "\nEnter id,price,name";
	cin >>id>>p>>nm;
	part p1(id,p,nm);
	cout << "By Using copy constructor\n";
	part p2(p1);
	p1.print();
	p2.print();
	return 0;
}
