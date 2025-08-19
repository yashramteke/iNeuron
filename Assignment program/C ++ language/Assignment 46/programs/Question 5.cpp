/*Q5. Create a map, insert some pairs and Find the occurrence of each pair and print it on the screen.)*/

#include <iostream>
#include <map>
using namespace std;

int main() {

    map <string, int> m;

    m.insert(make_pair("Yash", 10));
    m.insert(make_pair("Ravi", 20));
    m.insert(make_pair("Rahul", 30));
    m.insert(make_pair("Vrushabh", 20));
    m.insert(make_pair("Naitik", 30));

    for(const pair<string, int> &x : m)cout<<"Occurrence of "<<x.first<<" : "<<x.second<<" is 1"<<endl;
}
