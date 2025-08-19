/*Q7. Sort a given map in descending order based on values instead of keys in C++ STL.
Key     value
1         6
2         8
6         3
8         2*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    map <int, int> m {{1, 6}, {2, 8}, {6, 3}, {8, 2}};

    vector <pair<int, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b){return a.second > b.second;});

    for(pair<int, int> &x : v) cout<<x.first<<" : "<<x.second<<endl;
}
