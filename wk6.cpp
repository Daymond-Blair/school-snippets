//Daymond Blair 1/20/2015 CS265

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string remember_Duplicate(string str1);

int main()

{

     string input;

     ofstream output_file;

     ifstream input_file ("input.txt");

     output_file.open ("output.txt");

     string line;

     string output;

     string key;

     int shift;

     char c;

     cout << "Enter the length of the Shift of Alphabets";

     cin >> shift;

     cout << "Enter the Key";

     cin >> key;

     key = remember_Duplicate(key);

     output = "";

     output += key;

     int pos;

     if (input_file.is_open())

     {

          cout <<key<<"\n";

          while ( getline(input_file,line))

          {

            

              for(int x = 0; x < line.length(); x++)

              {

                c = line[x];

                   if( isalpha(c) )

                   {

                        c = toupper(c);

                    if((pos = key.find(c)) > 0)

                    continue;

                        c = (((c-65)+0) % 26) + 65;

                   }

                   output += c;

              }

              output_file << output;

              cout << output << endl;

          }

     }

        

          input_file.close();

          output_file.close();

          system("pause");

          return 0;

}

string remember_Duplicate(string str1)

{

    string str2;

    int pos;

    for(int i = 0; i < str1.length(); i++)

    {

        if( (pos = str2.find(str1[i])) < 0)

        str2 += str1[i];

    }

    cout << str2 << endl;

    return str2;

}