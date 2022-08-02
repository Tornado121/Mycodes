#include<iostream>
#include<string.h>
using namespace std;
class user
{
	int age,i,l;
	char name[20],ch;
	public:
		void getdata()
		{
			try{
				cout << "Enter age and name:\n";
				cin >> age >> name;
				if(age < 18 || age > 60)
				{
					throw 0;
				}
			}
			catch(int a)
			{
				cout << "\nAge should be within limit\n";
			}
		
		}
		void getn()
		{
			try{
			l=strlen(name);
		 for(i =0 ; i < l ; i++)
		 {
		 	if(name[i]>='1' && name[i]<='9')
			{
				throw 'x';
			}
		 }
			}	 
			catch(char y)
			{
				cout << "Invalid name";
			}
		}
};
int main()
{
	user u;
	u.getdata();
	u.getn();
	return 0;
}
