/*Q1. Create a map, insert at least 5 pairs of keys and values and print it.*/

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
    for(pair<string, int> x : m)cout<<x.first<<" : "<<x.second<<endl;
}
