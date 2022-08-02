#include<iostream>
using namespace std;
class employee
{
	int eno;
        char ename[30],edesig[30];

	public :
		void getdata()
		{
			cout << "Enter eno,ename and edesig\n";
                        cin >> eno >> ename >> edesig;

			this->eno = eno;
			this->ename[30]=ename[30];
			this->edesig[30]=edesig[30];
		
//		cout << "Enter eno,ename and edesig\n";
  //                      cin >> eno >> ename >> edesig;

                        cout << "Employee number:"<<this->eno<<"\n";
                        cout << "Employee name:"<<this->ename<<"\n";
                        cout << "employee designation:"<<this->edesig;
		}
};
int main()
{
	employee e;
	e.getdata();
	return 0;
}
