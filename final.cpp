// Daymond Blair 1/26/2015 CS265 Final

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//letter counting loop
void count_frequencies(string str, int letters[], int size)
{
    for(int i = 0; i < str.length(); i++)
   {
       if(str[i] >= 'A' && str[i] <= 'Z')
       letters[str[i] - 'A']++;
       else if(str[i] >= 'a' && str[i] <= 'z')
       letters[str[i] - 'a']++;
       else continue;
   }
}

int main()
{
   ifstream infile;
   string file_name;
   int letters[26] = { 0 };
   string str;
   cout <<"Enter file name. :";
   cin >> file_name; cout << endl;
    infile.open(file_name.c_str());
   
	//file validation
	if(!infile)
   {
       cout <<"Unable to open file . Exiting program :" << endl;
       return 0;
   }

	//read file data
   while(!infile.eof())
   {
       infile >> str;
       count_frequencies(str, letters, 26);
	   //cin.get();
   }

    infile.close();
	
	//assign and output letters
   cout << "Letter \t Count " << endl;
   int max = letters[0];
   for(int i = 0; i < 26; i++)
   {
   cout << static_cast<char> (i +'a') << " \t " << letters[i] << endl;
   if(letters[i] > max ) max = letters[i];
   }
   cout << "\nHighest frequency letter is " << static_cast<char> (max +'a') << endl;
   cout << "\nE is Encrypted to " << static_cast<char> (max +'a') << endl;
   
	cin.get();
	cin.get();
   return 0;
}