#include<iostream>
#include<string.h>
using namespace std;
class media
{
	public:
		virtual void accept()=0;
		virtual void display()=0;
};
class book : public media
{
	int bid,bprice;
	char bname[20];
	public :
		void accept()
		{
			cout << "Enter bid , bprice , bname:\n";
			cin >> bid >> bprice >> bname;
		}
		void display()
		{
			cout << "Book Id :"<<bid <<"\n"<<"Book Price"<<bprice<<"\nBook name:"<<bname<<"\n";
		}
};
class cd : public media
{
	int cid;
	char cname[20];
	public :
		void accept()
		{
			cout << "enter cid and cname:\n";
			cin >>cid >> cname;
		}
		void display()
		{
			cout << "Cid:"<<cid << "\t"<<"Cname:"<<cname;
		}
};
int main()
{
	book b;
	cd c;
	b.accept();
	b.display();
	c.accept();
	c.display();
	return 0;
}
