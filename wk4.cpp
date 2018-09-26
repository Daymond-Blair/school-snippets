//Daymond Blair 1/26/2015 CS265

#include<iostream>
#include<string>

using namespace std;

class Person {

public:
Person();
Person(string person_name, int person_age);
string get_name() const;
int get_age() const;

private:
string name;
int age; 
};

Person::Person(){
age = 0;
}

Person::Person(string person_name, int person_age){
name = person_name;
age = person_age;
}

string Person::get_name() const{return name;}
int Person::get_age() const{return age;}

int main(){
Person A("Blair",27);
Person B;
cout<<"Person A created with 'Blair', 27 and Person B created with default constructor.\n";
cout<<"A has a name of "<< A.get_name() <<" and age of "<< A.get_age() <<".\n";
cout<<"B has a name of "<< B.get_name() <<" and age of "<< B.get_age() <<".\n";

cin.get();
return 0;
}