/*Daymond Blair wk2 runtime analysis program
CS425 Sullivan 
9/15/15*/

//This program utilizes the clock method from the ctime class to calculate and print runtime of various loops.

//main.cpp
#include<iostream>
#include<ctime>

using namespace std;

//Global stress test variable
int TEST = 100;

int main()
{
//initialize clock variable
	clock_t start, stop;
//initialize counting variables
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

//Function #1
	cout << "START" << endl;
	start = clock();
	for(int i = 0; i < TEST; ++i){
		++sum1;
		cout << sum1 << endl;
	}
	stop = clock();
	cout << "STOP" << endl;
	cout << "\nRuntime is " << static_cast<double>(stop - start) / (CLOCKS_PER_SEC) << " seconds" << endl;
//Runtime is consistent with my analysis O(n). Test variable scales linearly.

//Function #2
	cout << "\nSTART" << endl;
	start = clock();
	for(int i = 0; i < TEST; ++i){
		for(int j = 0; j < TEST; ++j)
		++sum2;
		cout << sum2 << endl;
	}

	stop = clock();
	cout << "STOP" << endl;
	cout << "\nRuntime is " << static_cast<double>(stop - start) / (CLOCKS_PER_SEC) << " seconds" << endl;
//Runtime is consistent with my analysis O(n^2). Test variable increments by a factor of two.

//Function #3
	cout << "\nSTART" << endl;
	start = clock();
	for(int i = 0; i < TEST; ++i){
		for(int j = 0; j < TEST * TEST; ++j)
		++sum3;
		cout << sum3 << endl;
	}
	stop = clock();
	cout << "STOP" << endl;
	cout << "\nRuntime is " << static_cast<double>(stop - start) / (CLOCKS_PER_SEC) << " seconds" << endl;
//Runtime is consistent with my analysis O(n^3). Test variable increments by a factor of threee.

	cin.get();
	return 0;
}