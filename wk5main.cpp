// Daymond Blair 1/26/2015 Class implementation program

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#include "wk5.h"

using namespace std;
int main()
{
	string name;
	vector<Person *> people;
	Person * person_pointer;

	cout << "Enter names, when done type end: ";
	cin >> name;
	while(name != "end")
	{
		person_pointer = new Person(name);
		people.push_back(person_pointer);

		cout << "Enter another name:  ";
		cin >> name;
	}

	int i, j;

	for(i = 0; i < people.size(); i++)
	{
		cout << "Who is " << people[i] -> get_name() << " 's best friend? ";
		cin >> name;

		for(j = 0; j < people.size(); j++)
			if (people[j] -> get_name() == name)
				break;
		if(j < people.size())
			people[i] -> set_best_friend(people[j]);
		else
			cout << "Can not find best friend " << name << endl;
	}

	for(i = 0; i < people.size(); i++)
		delete people[i];

}