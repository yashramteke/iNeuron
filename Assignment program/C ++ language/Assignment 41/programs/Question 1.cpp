/*Q1. Create a stack of int type, push 5 elements in it and print it on the console screen.*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    int x = 0;

    cout<<"Enter 5 elements"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<i<<") = ";
        cin>>x;

        s.push(x);
    }

    cout<<endl<<"Popping elements from stack"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
