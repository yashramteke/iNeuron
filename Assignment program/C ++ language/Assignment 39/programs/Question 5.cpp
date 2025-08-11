/*Q5. Input and add elements to a list C++ STL*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> f;

    int ch = 0;
    for(int i = 0; i < 5; i++)
    {
        cin>>ch;
        f.push_back(ch);
    }

    cout<<endl;
    for(int x : f) cout<<x<<" ";

}
