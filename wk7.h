// Daymond Blair Safe Stack Program 1/21/2015
#ifndef SAFESTACK_H
#define SAFESTACK_H

#include <stack>
#include <string>
#include <iostream>

using namespace std;

// implement safestack class
class SafeStack
{
public:
   SafeStack();
   void push(string str);
   string top();
   void pop();
   int size();
   bool empty();  

private:
   stack<string> stk;
};

SafeStack::SafeStack()
{}
// add element to top of stack
void SafeStack::push(string str)
{
   stk.push(str);
}
// show element on top of stack
string SafeStack::top()
{
   if(stk.empty())
       return "Stack is empty!";
   else
       return stk.top();
}
// remove element from top of stack
void SafeStack::pop()
{
   if(!stk.empty())
       stk.pop();
}
// show stack size
int SafeStack::size()
{
   return stk.size();
}
// show when stack is empty
bool SafeStack::empty()
{
   return stk.empty();
}

#endif