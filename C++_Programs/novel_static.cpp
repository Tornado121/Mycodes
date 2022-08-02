#include<iostream>
#include<string.h>
using namespace std;

class novel
{
	static int id;
	char n_name[20],n_author[20];
	static int count;
	public:
		void getData()
		{
			cout << "Enter id :\n";
			cin >> id;
			cout << "Enter name:\n";
			cin >> n_name;
			cout <<"Enter author name:\n";
			cin >> n_author;
			count++;
		}
		void display()
		{
			cout << "Novel id :"<<id<<"\n";
			cout << "Novel Name:"<<n_name<<"\n";
			cout << "Novel Author  :"<<n_author<<"\n";
		}
		static void counter()
		{
			cout << "Total count of novels  is:"<<count;
		}
};
int novel::id;
int novel::count;
int main()
{
	novel n[10];
	int num,i;
	cout << "Enter how many novels:\n";
	cin >>num;
	for(i = 0 ; i<num ; i++)
	{
		n[i].getData();
	}
	 for(i = 0 ; i<num ; i++)
        {
                n[i].display();
		n[i].counter();
        }
	
	return 0;

}
