/*Q6. Create a map, use a member function to tell whether a map is empty or not and then
insert some pairs into the map and find the size of map.*/

#include <iostream>
#include <map>
using namespace std;

int main() {

    map <string, int> m;

    if(m.empty())
        cout<<"map is empty"<<endl;
    else
        cout<<"map is not empty"<<endl;

    m.insert(make_pair("Yash", 10));
    m.insert(make_pair("Ravi", 20));
    m.insert(make_pair("Rahul", 30));
    m.insert(make_pair("Vrushabh", 20));
    m.insert(make_pair("Naitik", 30));

    cout<<"pair inserted and size of map is "<<m.size();
}
