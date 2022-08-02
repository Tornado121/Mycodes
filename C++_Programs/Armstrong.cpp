#include<iostream>
//#include<conio.h>
using namespace std;
class Number{
	int num,rem,sum=0,nsave;
	public:
		void isArmstrong(){
			cout << "Enter A Number:\n";
			cin >>num;

			nsave = num;
			
			while(num>0){
				rem = num%10;
				sum = sum + (rem * rem * rem);
				num = num/10;
			}
			cout << "The Sum of Cubes of digits of number ="<<sum;
			if(sum == nsave){
				cout << "The number is a Armstrong Number\n";
			}
			else
			{
				cout << "Number is not an Armstrong Number\n";
			}
		}
};
int main()
{
//	clrscr();
	Number n;
	n.isArmstrong();
//	getch();
	return 0;
}
