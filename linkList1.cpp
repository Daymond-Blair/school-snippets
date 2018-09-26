#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
const int maxLength = 255;

struct list
{
char name[maxLength];
char address[maxLength];
char phone[maxLength];
list *next;
};

typedef list address;

//prototypes
void addtoList (); // Add a name to our address book
void delfromList (); // Delete a name from our address book
void printName (); // Print an entry in the address book
void listNames (); // List all the names in the address book
void freeList (); // Free all the linked list


list *Head = NULL; //Head of linked list

int main()
{
char input;

while (1)
{

cout << "Welcome to the address book....\n";
cout << "What would you like to do?\n";
cout << "(A)dd a person/(D)elete a person/(P)rint an entry/(L)ist all names/(Q)uit\n";
cin >> input;

switch(toupper(input))
{
case 'A':
addtoList();
break;

case 'D':
delfromList();
break;

case 'P':
printName();
break;

case 'L':
listNames();
break;

case 'Q':
freeList();
return (0);
default:
cout << "Unknown command\n";
}
}
}

void addtoList() //adds a name
{

address *newName = new address;
cout << " Enter the name of the person ";
cin >> newName -> name;
cout << " Enter the persons address ";
cin >> newName -> address;
cout << " Enter the persons telephone number ";
cin >> newName -> phone;

newName -> next= Head; //point to the first node
Head = newName; //update where the head points

}

void delfromList() //remove a name
{

address *delPtr; // Pointer to find name to delete
address *prevPtr; // Pointer to name before name
char delName[maxLength]; // Name to delete

cout << " Enter the name you want to delete: ";
cin >> delName[maxLength];

if (Head == NULL)
{
cout << "No list to delete from\n";
return;
}

if (stricmp(Head->name, delName) == 0)
{
delPtr= Head;
Head= Head->next;
delete delPtr;
return;
}

prevPtr = Head;

while (prevPtr -> next != NULL) // look for the name
{
if (stricmp(prevPtr -> next -> name,delName) == 0) //if name is found
{
delPtr= prevPtr -> next;
prevPtr -> next = delPtr -> next;
delete delPtr;
return;
}

prevPtr= prevPtr -> next;
}
cout << " Name not found\n ";
}

void printName() // prints a name from the list
{
char name[maxLength]; // name to look up
address *searchPtr;
cout << "Please enter the name you want to look up: ";
cin >> name[maxLength];
searchPtr = Head;

while (searchPtr != NULL)
{
if (stricmp(searchPtr->name, name) == 0)
{
cout << "Address: "<< searchPtr->address << endl;
cout << "Telephone #: " << searchPtr->phone << endl;
return;
}
searchPtr = searchPtr->next; // Move on to next item
}
cout << "No such name!\n";
}

void listNames() //List all names in the book
{
address *tmpPtr;
cout << "All the names in the address book: " << endl;
tmpPtr = Head;
while (tmpPtr != NULL)
{
cout << tmpPtr->name << endl;
tmpPtr = tmpPtr->next;
}
}

void freeList() // frees list memory
{
address *delPtr;

while(Head != NULL)
{
delPtr= Head; // Store the head
Head= Head->next; // Move on
delete delPtr;
}
}