/*Q3. Create a stack, and implement main operations like push(), pop(), peek(), empty() and size().*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> s;

    cout<<"pushing elements 10, 20, 30"<<endl;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<endl<<"popping element = "<<s.top()<<endl;
    s.pop();

    cout<<endl<<"Checking stack is empty or not = ";
    if(s.empty())
        cout<<"stack is empty";
    else
        cout<<"stack is not empty";

    cout<<endl<<endl<<"stack size = "<<s.size();

}
