#include<iostream>
using namespace std;

class student
{
        int rno;
        char name[30];

        public :
                int getData()
                {
                        cout << "Enter Roll Number:";
                        cin >> rno;
                        cout << "\nEnter Name:";
                        cin >> name;
                        return 0;
                }

                int printData()
                {
                        cout << "\nRoll Number:"<<rno;
                        cout << "\nName:"<<name;

                        return 0;
                }
};

class marks : public student
{
	protected:
		int m1,m2,m3;
	public:
		int getm()
		{
			cout << "\nenter marks:";
			cin >>m1>>m2>>m3;
			return 0;
		}

		int printm()
		{
			cout << "Marks are:"<<m1<<"\t"<<m2<<"\t"<<m3<<"\n";
			return 0;
		}
};
int main()
{
        marks obj;
        obj.getData();
	obj.getm();
        obj.printData();
	obj.printm();
        return 0;
}
