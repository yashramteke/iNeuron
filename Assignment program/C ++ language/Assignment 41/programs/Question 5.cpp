/*Q5. Create stack1 of int type, and create another stack of the same type with name
stack2 and copy all the elements of stack1 into stack2 in the same order.*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    stack <int> stack1;
    stack <int> stack2;

    vector <int> v;
int x = 0;
    for(int i = 0; i < 5; i++)
    {
        cout<<i<<") = ";
        cin>>x;
        stack1.push(x);
    }

    while(!stack1.empty())
    {
        v.push_back(stack1.top());
        stack1.pop();
    }
    while(!v.empty())
    {
        stack1.push(v.back());
        stack2.push(v.back());

        v.pop_back();
    }

    cout<<"stack1 size = "<<stack1.size()<<endl;
    cout<<"stack2 size = "<<stack2.size()<<endl;

    cout<<"stack1 elements = ";
    while(!stack1.empty())
    {
        cout<<stack1.top()<<" ";
        stack1.pop();
    }

    cout<<endl;

    cout<<"stack2 elements = ";
    while(!stack2.empty())
    {
        cout<<stack2.top()<<" ";
        stack2.pop();
    }

}
