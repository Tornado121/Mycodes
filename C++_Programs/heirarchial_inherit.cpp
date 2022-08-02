#include<iostream>
using namespace std;

class account
{
	int ac_no;
char name[30];

public :

int getData()
{
	cout <<"Enter Account Number:";
	cin >> ac_no;
	cout << "\nEnter Name:";
	cin >>name;

	return 0;
}
int printData()
{
	cout << "Account Number:"<<ac_no;
	cout << "\nName :"<<name;
	return 0;
}
};
class saving : public account
{
	int bal;
	public:
		int getbal()
	{
		cout << "Enter Balance:\n";
		cin >>bal;
		if(bal<500)
		{
		cout << "Amount should be minimum 500\n";
		}
		else
		{
		cout << bal;
		}
	}
};
class current : public account
{
	int balance;
	public:
		int getbalance()
	{
		cout << "Enter Balance:\n";
		cin >>balance;
		if(balance<3000)
		{
		cout << "Amount should be minimum 500\n";
		}
		else
		{
		cout << balance;
		}
	}
};
	int main()
{
	int ch;
	cout << "\nEnter Your Choice:";
	cin >> ch;
	switch(ch)
	{
		case 1:
			saving s;
			s.getData();
			s.printData();
			s.getbal();
			break;
		
		case 2:
			current c;
			c.getData();
			c.printData();
			c.getbalance();
			break;
	}
	return 0;
}
