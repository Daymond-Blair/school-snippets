// Daymond Blair 1/21/2015 CS265 Safe Stack Program

#include "wk7.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
// declare safestack
   SafeStack ss;


   cout << "The number of elements in the stack: " << ss.size() << endl;
   cout << "The top element in the stack: " << ss.top() << endl;

// add elements to the stack
   ss.push("Daymond");
   ss.push("Blair");

   cout << "\nThe number of elements in the stack: " << ss.size() << endl;
   cout << "The top element in the stack: " << ss.top() << endl;
      
   cout << "\nThe number of elements in the stack: " << ss.size() << endl;
   cout << "Try to remove one element from the stack." << endl;
   ss.pop();
   cout << "The top element in the stack: " << ss.top() << endl;

   cout << "\nThe number of elements in the stack: " << ss.size() << endl;
   cout << "Try to remove one element from the stak." << endl;
   ss.pop();
   cout << "The top element in the stack: " << ss.top() << endl;

   cout << "\nThe number of elements in the stack: " << ss.size() << endl;
   cout << "Try to remove one element from the stak." << endl;
   ss.pop();
   cout << "The top element in the stack: " << ss.top() << endl;

   cout << endl;
   system("pause");
   return 0;
}