#include<iostream>
#include<string.h>
using namespace std;

class department
{
	char dept_name[30];
	int dept_id,year,faculty_no,students_no;

	public:
		void getdata()
		{
			cout << "Enter Department Id:";
			cin >> dept_id;
			cout << "\nEnter Department Name:";
			cin >> dept_name;
			cout << "\nEnter Number Of Faculty:";
			cin >> faculty_no;
			cout << "\nEnter Number Of Students:";
			cin >> students_no;
			cout << "\nData Entered Successfully!\n";

		}

		void display()
		{
			cout << "Department Id:"<<dept_id;
                        cout << "\n Department Name:"<<dept_name;
                        cout << "\n Number Of Faculty:"<<faculty_no;
                        cout << "\n Number Of Students:"<<students_no;
                        cout << "\nData displayed Successfully!\n";

		}
		void info(char a[])
		{
			if(strcmp(dept_name,a)==0)
			{
				cout << "Department Details Are:\n"<<dept_id<<"\t"<<dept_name<<"\t"<<faculty_no<<"\t"<<students_no<<"\n";
			}	
					
		}
		void info(int l)
		{
			if(strcmp(year,l)==0)
			{
				cout << "Department Details Are:\n"<<dept_id<<"\t"<<dept_name<<"\t"<<faculty_no<<"\t"<<students_no<<"\n";

			}
		}
};

int main()
{
	department d[10];
	int n,i,yr;
	char name[30];
	cout << "Enter How many Enteries:\n";
	cin >> n;
	for(i=0 ; i<n ; i++)
	{
		d[i].getdata();
	}
	for(i=0 ; i<n ; i++)
        {
                d[i].display();
		cout << "*********************************************\n";
        }
	cout << "Enter Department name to find details\n";
	cin >> name;
	for(i=0 ; i<n ; i++)
        {
                d[i].info(name);
        }
	cout << "Enter Year To Find Details:\n";
	cin >>yr;
	for(i=0 ; i<n ; i++)
        {
                d[i].info(yr);
        }



	return 0;

}
