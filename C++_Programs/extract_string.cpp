#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,l;
	char str[30];
	char ch;
	cout << "Enter string:";
	cin >> str;

	l = strlen(str);

	for(i = 0 ; i < l ; i++)
	{
		ch = str[i];
		
		cout <<ch<<"\n";
	}
	return 0;
}
