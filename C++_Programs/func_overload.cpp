#include<iostream>
#include<string.h>
using namespace std;
class person
{
	long int mob_no;
	char name[30],city[30];
	public :
		void getdata()
		{
			cout << "Enter Person Name:";
			cin >> name;
			cout << "\nEnter City  Name:";
			cin >> city;
			cout << "\nEnter mobile number";
			cin >> mob_no;
		}
		void display()
		{
			cout << "\nPerson Name:"<<name;
			cout << "\nCity"<<city;
			cout << "\nMobile Number:"<<mob_no;
		}
		void info(char a[])
		{
			if(strcmp(name,a)==0)
			{
				cout << name <<"\t"<<city<<"\t"<<mob_no<<"\n";
			}
		}
		void info(long int num)
		{
			if(mob_no==num)
			{
				cout << "Details are"<<name <<"\t"<<city<<"\t"<<mob_no<<"\n";
			}
		}
};
int main()
{
	char nm[30];
	long int mob;
	int n,i;
	person p[10];
	cout << "\n How many entries:";
	cin >> n;
	for(i =0 ; i<n ; i++)
	{
		p[i].getdata();
		cout << "\n";
	}
	for(i =0 ; i<n ; i++)
        {
                p[i].display();
        }
	cout << "\nEnter name to find details:";
	cin >> nm;
	cout << "\nDetails are:\n";
	for(i =0 ; i<n ; i++)
        {
                p[i].info(nm);
                cout << "\n";
        }
	cout <<"\n Enter mobile number to find details:";
	cin >>mob;
	 for(i =0 ; i<n ; i++)
        {
                p[i].info(mob);
                cout << "\n";
        }



}
