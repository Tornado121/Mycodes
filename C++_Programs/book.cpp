#include<iostream>
#include<string.h>
using namespace std;
class book
{
	int bid,bprice;
	char bname[20],bauth[20];
	public :
		void getdata()
		{
			cout << "Enter id,price,name,author:\n";
			cin >> bid>>bprice<<bname<<bauth;
		}
		void display()
		{
			cout << "id:"<<bid<<"\n";
			cout << "Price:"<<bprice<<"\n";
			cout << "Name:"<<bname<<"\n";
			cout << "Author:"<<bauth<<"\n";
		}
		void searchbook(char auth[])
		{
			if(strcmp(bauth,auth)==0)
			{
				cout << bname;
			}
		}
		void searchprice(int p)
		{
			if(p == bprice)
			{
				cout << bprice;
			}
		}
};
int main()
{
	book b[10];
	int i,n,price;
	char author[20];
	cout << "Enter how many books:\n";
	cin>>n;
	for( i =0 ; i<n ; i++)
	{
		b[i].getdata();
	}
	 for( i =0 ; i<n ; i++)
        {
                b[i].display();
        }
	 cout << "Enter author name to get details:\n";
	 cin >>author;
	 cout << "Details are:"<<b.searchbook(author);

	 cout << "Enter price to get details:\n";
         cin >>price;
         cout << "Details are:"<<b.searchprice(price);

	return 0;

}
