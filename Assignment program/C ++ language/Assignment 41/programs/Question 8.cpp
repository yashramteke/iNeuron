/*Q8. Create a stack of int type and sort it in descending order.*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {5, 4, 3, 2, 1};
    stack <int, vector <int>> s(v);

    cout<<"Before sorting = ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    vector <int>::reverse_iterator rit = v.rbegin();
    while(rit != v.rend())
    {
        s.push(*rit);
        rit++;
    }

    cout<<endl<<"After sorting = ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
