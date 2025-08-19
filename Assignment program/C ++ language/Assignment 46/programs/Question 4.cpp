/*Q4. Create a map, and insert some pairs and find one pair out of the inserted pair and
replace it with another pair and print map.*/

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {

    map <string, int> m;
    map <string, int>::iterator it;

    m.insert(make_pair("Yash", 10));
    m.insert(make_pair("Ravi", 20));
    m.insert(make_pair("Rahul", 30));
    m.insert(make_pair("Vrushabh", 40));
    m.insert(make_pair("Naitik", 50));

    string key;

    cout<<"Enter key = ";
    getline(cin, key);

    it = m.find(key);

    if(it != m.end())
    {
        string tmp = (*it).first;
        int t = (*it).second;
        int v;

        m.erase(it->first);

        cout<<"Enter new key = ";
        getline(cin, key);

        cout<<"Enter new value = ";
        cin>>v;

        m.insert(make_pair(key, v));
    }

    for(pair<string, int> x : m)cout<<x.first<<" : "<<x.second<<endl;
}
