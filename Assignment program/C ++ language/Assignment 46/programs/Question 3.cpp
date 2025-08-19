/*Q3. Create a map, insert some pairs and print all elements in reverse order using rbegin
and rend function.*/

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {

    map <string, int> m;
    map <string, int>::reverse_iterator it = m.rbegin();

    m.insert(make_pair("Yash", 10));
    m.insert(make_pair("Ravi", 20));
    m.insert(make_pair("Rahul", 30));
    m.insert(make_pair("Vrushabh", 40));
    m.insert(make_pair("Naitik", 50));

    while(it != m.rend())
    {
        cout<<(*it).first<<" : "<<(*it).second<<endl;
        it++;
    }
}
