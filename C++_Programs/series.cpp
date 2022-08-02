#include<iostream>
using namespace std;
class test
{
	int i,j,k=1,n,sum;

	public:
		void series()
		{
			cout << "Enter Value of n:";
			cin >> n;				//n=3
			sum = 0;
			for(i = 1 ; i < n ; i++) 		 //i=1 <3 
			
			{
				for(j  = 1 ; j<=i ; j++) 	 //j=1 i=1 j<=i yes
				{
					sum = sum + k;		//sum = 0 +1=1
								//k = 1+2=3
					k = k+2;
				}	
			}
			cout << "\nSum of series is:\n"<<sum;
		}
};
int main()
{
	test t;
	t.series();
	return 0;
}
