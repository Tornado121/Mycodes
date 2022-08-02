#include<iostream>
//#include<conio.h>
using namespace std;
class SOG{
        int num,rem,sum=0,nsave;
        public:
                void getsum(){
                        cout << "Enter A Number:\n";
                        cin >>num;

                        nsave = num;

                        while(num>0){
                                rem = num%10;
                                sum = sum + rem;
                                num = num/10;
                        }
                        cout << "The Sum of of digits of number ="<<sum;
                }
};
int main()
{
//      clrscr();
        SOG s;
        s.getsum();
//      getch();
        return 0;
}

