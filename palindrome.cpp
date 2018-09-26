/*Daymond Blair palindrome program 5-26-15
  CS270 Week 3 Carol Masuck*/
#include <iostream>
#include<string>
using namespace std;
bool Palindrome(int first, int last, string st);

int main()
{
	int first = 0;
	int last = 0;
	string st;
	cout << "Enter a string: ";
	cin >> st;
	last = st.length();

	if (Palindrome(first,last - 1,st) == true)
		cout << "\n" << st << " is a Palindrome \n" << endl;
	else
		cout << "\n" << st << " is not a Palindrome \n" << endl;

	system("pause");
	return 0;
}
//recursive function
bool Palindrome(int first, int last, string inputString)
{
	if (first > last)
		return true;
	if (inputString[first]!= inputString[last])
		return false;
	else if(inputString[first] == inputString[last])
		return Palindrome((first+1),(last-1),inputString);
}