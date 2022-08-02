#include<iostream>
using namespace std;
class worker
{
	char worker_name[20];
	int hours;
	float pay_rate,salary;
	public:
		void getdata()
		{
			cout << "Enter worker name:\n";
			cin >> worker_name;
			cout << "Enter number of hours worked:\n";
			cin >> hours;
			cout << "Enter pay rate of worker:\n";
			cin >> pay_rate;
		}
		void display()
		{
			cout << "Worker name:"<<worker_name<<"\n";
			cout << "Hours worked:"<<hours<<"\n";
			cout << "Pay rate:"<<pay_rate<<"\n";
			cout << "Total salary:"<<sal(pay_rate);
		}
		float sal(int pay=15)
		{
			salary = hours * pay;
			return salary;
		}
};
int main()
{
	worker w;
	w.getdata();
	w.display();
	return 0;
}
