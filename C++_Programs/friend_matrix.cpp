#include<iostream>
using namespace std;

class matrix
{
	int i,j,m[3][3];
	public:
		void getdata()
		{
			cout << "Enter elements in matrix:\n";
			for(i = 0 ; i<3 ; i++)
			{
				for(j = 0 ; j<3 ; j++)
				{
					cin >>m[i][j];
				}
			}
	
		}
		void display()
		{
			cout << "Matrix of elements is:\n";
			for(i = 0 ; i<3 ; i++)
                        {
                                for(j = 0 ; j<3 ; j++)
                                {
                                        cout << m[i][j];
					cout <<"\t";
                                }
				cout << "\n";
                        }


		}
		friend matrix transpose(matrix);
};
matrix transpose(matrix m1)
{
	matrix temp;
	int i,j;
	 for(i = 0 ; i<3 ; i++)
                        {
                                for(j = 0 ; j<3 ; j++)
                                {
                                       temp.m[i][j] = m1.m[j][i];
				       cout << "\t";
                                }
				cout << "\n";
                        }
		return temp;

}
int main()
{
	matrix m1,m2;
	m1.getdata();
	m1.display();
	cout << "Transpose Of matrix is as follows:\n";
	m2=transpose(m1);
	m2.display();
	return 0;
}
