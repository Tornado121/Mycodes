#include<iostream>
using  namespace std;
class car
{
	protected:
		int car_no;
		char car_name[20];
	public:
		void getcar()
		{
			cout << "Enter car number:\n";
			cin >> car_no;
			cout << "Enter car name:\n";
			cin >> car_name;
		}
		void printcar()
		{
			cout << "Car Number:"<<car_no<<"\n"<<"Car Name:"<<car_name<<"\n";
		}
};
class maruti:public car
{
	protected:
		int Mcar_no;
		char Mcar_name[20];
	public:
		void getM()
                {
                        cout << "Enter Maruti car number:\n";
                        cin >> Mcar_no;
                        cout << "Enter Maruti car name:\n";
                        cin >> Mcar_name;
                }
                void printM()
                {
                        cout << "Maruti Car Number:"<<Mcar_no<<"\n"<<"Car Name:"<<Mcar_name<<"\n";
                }

};
class maruti800:public maruti
{
        protected:
                int M800_no;
                char M800_name[20];
	public:
                void get800()
                {
                        cout << "Enter Maruti car number:\n";
                        cin >> M800_no;
                        cout << "Enter Maruti car name:\n";
                        cin >> M800_name;
                }
                void print800()
                {
                        cout << "Maruti800 Car Number:"<<M800_no<<"\n"<<"Maruti800 Name:"<<M800_name<<"\n";
                }

};
int main()
{
	maruti800 m;
	m.getcar();
	m.printcar();
	m.getM();
	m.printM();
	m.get800();
	m.print800();
	return 0;
}

