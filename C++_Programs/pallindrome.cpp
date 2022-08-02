#include<iostream>
//#include<conio.h>
using namespace std;
class number{
        int num,rev=1,rem,nsave;
        public:
                void pallindrome(){
                        cout << "Enter A Number:\n";
                        cin >>num;

                        nsave = num;

                        while(num>0){
                                rem = num%10;
                                rev = (rev * 10) + rem;
                                num = num/10;
                        }
                        cout << "The reverse of number =\n"<<rev;

			if(rev==nsave){
				cout << "The Entered Number is a pallindrome\n";
			}
			else
			{
				cout << "The Entered Number is not pallindrome\n";
			}
                }
};
int main()
{
//      clrscr();
        number n;
        n.pallindrome();
//      getch();
        return 0;
}


