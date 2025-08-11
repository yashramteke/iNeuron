/*Q7. Create a stack of int type and sort it.*/

#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
using namespace std;

int main()
{
    stack <int> s;
    vector <int> v;

    vector <int>::iterator it;

    for(int i = 1; i <= 5; i++)
    {
        s.push(i * 100);
    }

    cout<<"Before sorting = ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        v.push_back( s.top() );
        s.pop();
    }

    it = v.begin();

    while(it != v.end())
    {
        s.push(*it);
        it++;
    }

    cout<<endl<<"After sorting = ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }




}
