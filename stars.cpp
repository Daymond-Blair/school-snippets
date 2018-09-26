/*Daymond Blair stars program 5-26-15
  CS270 Week 3 Carol Masuck*/
#include<iostream>
using namespace std;

void line2(int, int, int);

int main()
{
	int i;
	
	do
	{
		cout<<"Enter number of rows. ";
		cin >> i;
		if(i < 0)
			cout << "\nrows cannot be negative. \n" << "\n";
	}while(i < 0);

	line2(1, 1, i);
	system("pause");
	return 0;
}

void line2(int m,int n,int p)
{
	int i;
	if(m < n)
		return;
	for(i = 0; i < m; i++)
		cout<<"*";
	if(m > 0)
		cout << endl;
	if(m == p||n == 0)
		line2(m - 1, 0, p);
	else
		line2(m + 1, n, p);
}  