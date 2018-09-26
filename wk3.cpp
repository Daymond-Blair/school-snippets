/* Daymond Blair CS265 Sorting Program 12/29/14 */

#include <iostream>

using namespace std;

void sort3(int& v, int& w, int& x);

int main()
{
	int v = 3;
	int w = 4;
	int x = 1;

	cout << "\n V was " << v << endl;
	cout << " \n W was " << w << endl;
	cout << " \n X was " << x << endl;
	sort3(v, w, x);

	cout << " \n Now V is " << v << endl;
	cout << " \n Now W is " << w << endl;
	cout << " \n Now X is " << x << endl;

	cin.get();

	return 0;
}

void sort3(int& v, int& w, int& x)
{
	if (w > x) std::swap(v, w);
	if (v > w) std::swap(v, x);
}

