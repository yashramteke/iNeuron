/*Q10. Write a C++ program to implement Hash Table using Template Class.*/

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map <int, string> m;

    m.insert({3, "Ramteke"});
    m[1] = "yash";
    m.insert({2, "vrushabh"});

    cout<<"size = "<<m.size()<<endl;

    for(map<int, string>::iterator i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<" : "<<i->second<<endl;
    }
}
