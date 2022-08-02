#include<iostream>
#include<iomanip>
using namespace std;
class item
{
	public:
		int item_no;
		char item_name[30];
		float item_price;
};
class discount:public item
{
	public:
	int discounted_percent;
	float discounted_price,dis;
	public:
		void getdata()
		{
			cout << "item number:\n";
			cin >>item_no;
			cout << "item Name:\n";
			cin >> item_name;
			cout << "Item price:\n";
			cin >> item_price;
			cout << "Enter discounted percent:\n";
			cin >> discounted_percent;
			dis=discounted_percent * item_price/100;
			discounted_price=item_price - dis;
		}
		void display()
		{
			cout << "Item number:"<<item_no<<endl;
			cout << "Item Name:"<<item_name<<endl;
			cout << "Item price:"<<item_price<<endl;
			cout << "Discounted percent:"<<discounted_percent<<endl;
			cout << "Discounted Price:"<<discounted_price<<endl;
		}
};
int main()
{
	discount d[10];
	int i,price=0,n;
	float discount=0;
	cout << "enter how many items:";
	cin >> n;
	for(i =0 ; i<n ; i++)
	{
		d[i].getdata();
	}
	cout << "Item details are:"<<endl;
	for(i =0 ; i<n ; i++)
	{
		d[i].display();
	}
	for(i =0 ; i<n ; i++)
        {
                price = price + d[i].item_price;
        }
	for(i =0 ; i<n ; i++)
        {
               discount =discount + d[i].item_price - d[i].discounted_price;
        }
	cout << "Total price:"<<price<<endl;
	cout << "Total discount:"<<discount;
	return 0;

}
