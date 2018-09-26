/*Daymond Blair wk4 setClass implementation
  CS425 Sullivan 9/29/15*/

#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	//declare empty set containers, iterator, and output iterator
	set<int> mySet;
	set<int, greater<int> > mySetSort; //will sort contents in descending order
	set<int, greater<int> > :: iterator myIter;
	ostream_iterator<int> screen(cout, " ");

	//fill mySet
	mySet.insert(15);
	mySet.insert(12);
	mySet.insert(20);
	mySet.insert(40);
	mySet.insert(241);
	
	//output contents of mySet
	cout << "mySet = ";
	copy(mySet.begin(), mySet.end(), screen);
	cout << endl;

	//erase contents of mySet
	mySet.clear();
	cout << "mySet = ";
	copy(mySet.begin(), mySet.end(), screen);
	cout << endl;

	//fill mySetSort
	mySetSort.insert(6);
	mySetSort.insert(33);
	mySetSort.insert(2);
	mySetSort.insert(617);
	mySetSort.insert(86);
	mySetSort.insert(9);

	//output sorted contents of mySetSort
	cout << "mySetSort = ";
	copy(mySetSort.begin(), mySetSort.end(), screen);
	cout << endl;

	//output contents of mySetSort after erase modifier
	mySetSort.erase(6);
	cout << "mySetSort = ";
	copy(mySetSort.begin(), mySetSort.end(), screen);
	cout << endl;

	//output contents after iterating through container and erasing a number
	myIter = mySetSort.begin();
	for(int x = 0; x < 2; x++)
	{
		++myIter;
	}
	mySetSort.erase(myIter); //erase element specified by iterator

	cout << "mySetSort = ";
	copy(mySetSort.begin(), mySetSort.end(), screen);
	cout << endl;

	system("PAUSE");
	return 0;
}