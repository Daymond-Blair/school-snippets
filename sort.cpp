#include <iostream>
#include <cstdlib>

using namespace std;

//print function
void print_array(double array[], int size){

	cout << "\nbubblesort: " << endl;
	
	for(int j = 0; j < size ; j++)
	
		cout << "\n " << array[j];
		cout << endl;
	

}

//sort function
void bubble_sort(double arr[], int size)
{
	bool not_sorted = true;
	double j = 1, tmp;

	while(not_sorted)
	{
		not_sorted = false;
		j++;

		for(int i = 0; i < size - j; i++)
		{
			if(arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				not_sorted = true;
			}
			print_array(arr, 19);
		}
	}

}

int main()
{
	double number_array[20], i;


	for(int x = 0; x < 19; x++)
	{
		cout << "Enter your numbers: " << endl;
		cin >> number_array[x];
	}
	
	for(int j = 0; j < 19; j++)
	{
		for(int k = 0; k < 18; k++)
		{
			i - number_array[j];
			number_array[j] = number_array[j+1];
			number_array[j+1] = i;
		}
	}

	cout << "Sorted numbers are " << endl;

	for(int h = 0; h < 19; h++)

	double array[19] = {.68, .73, .31, .78, .17, .79, .37, .73, .23, .30, .42, .25, .27, .07, .72, .86, .09, .44, .50};
	print_array(array, 19);
	bubble_sort(array, 19);


	cin.get();
	return 0;
}