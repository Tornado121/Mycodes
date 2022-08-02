#include<iostream>
using namespace std;

class conversion
{
	protected:
		float val;
	public :
		void getval()
		{
			cout << "Enter value:\n";
			cin >>val;
		}
		virtual float convert()=0;
};
class weight : public conversion
{
	public :
		float convert()
		{
			return (val/1000);
		}
};
class rupees : public conversion
{
	public :
		float convert()
		{
			return (val*100);
		}
};
class volume : public conversion
{
	public :
		float convert()
		{
			return (val/1000);
		}
};
int main()
{
	int ch;
	cout << "Enter your choice:\n";
	cout << "1.Gram To Kilogram\n";
	cout << "2.Rupees To Paisa\n";
	cout << "3.Mililiter To Liter\n";
	cin >> ch;
	if(ch == 1)
	{
		 weight w;
                        cout << "Enter value to convert gram to kilogram\n";
                        w.getval();
                        cout <<"gram = "<<w.convert();

	}
	else if(ch == 2)
	{
		rupees r;
                        cout << "Enter value to convert rupees to paisa\n";
                        r.getval();
                        cout <<"rupees = "<<r.convert();

	}
	else if(ch == 3)
	{
		 volume v;
                        cout << "Enter value to mililiter rupees to liter\n";
                        v.getval();
                        cout <<"mililiter = "<<v.convert();

	}
	else
	{
		cout << "Invalid Input\n";
	}
	return 0;
}
